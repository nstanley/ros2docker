#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;


class NodeAlpha : public rclcpp::Node
{
public:
  NodeAlpha() : Node("node_alpha")
  {
    // Create the publisher and subscriber
    m_publisher = this->create_publisher<std_msgs::msg::UInt32>("results", 10);
    m_subscription = this->create_subscription<std_msgs::msg::UInt32>(
      "sensor", 10, std::bind(&NodeAlpha::topic_callback, this, _1));
  }

private:

  // The callback method when a 'sensor' message is received
  void topic_callback(const std_msgs::msg::UInt32::SharedPtr msg) const
  {
    // Print what we found on the 'sensor' topic
    RCLCPP_INFO(this->get_logger(), "RX Sensor Data: '%d'", msg->data);
    // Calculate some result and send it back
    auto message = std_msgs::msg::UInt32();
    message.data = ((msg->data * msg->data) / 2) + 3;
    RCLCPP_INFO(this->get_logger(), "TX Result Data: '%d'", message.data);
    m_publisher->publish(message);
  }

  // The subscription device
  rclcpp::Subscription<std_msgs::msg::UInt32>::SharedPtr m_subscription;

  // The publisher device
  rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr m_publisher;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NodeAlpha>());
  rclcpp::shutdown();
  return 0;
}