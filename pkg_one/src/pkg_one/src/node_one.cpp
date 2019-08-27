#include <chrono>
#include <memory>
#include <random>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;


class NodeOne : public rclcpp::Node
{
public:
  NodeOne() : Node("node_one"), m_sensorData(3)
  {
    // Create the publisher and subscriber
    m_publisher = this->create_publisher<std_msgs::msg::UInt32>("sensor", 10);
    m_subscription = this->create_subscription<std_msgs::msg::UInt32>(
      "results", 10, std::bind(&NodeOne::topic_callback, this, _1));
    // Create a timer to periodically publish a message
    m_timer = this->create_wall_timer(
      500ms, std::bind(&NodeOne::timer_callback, this));
  }

private:
  // The callback method called based on the m_timer
  void timer_callback()
  {
    // Publish a message based on a random range of the latest result
    auto message = std_msgs::msg::UInt32();
    message.data = (rand()%m_sensorData)+1;
    RCLCPP_INFO(this->get_logger(), "TX Sensor Data = '%d'", message.data);
    m_publisher->publish(message);
  }

  // The callback method when a 'results' message is received
  void topic_callback(const std_msgs::msg::UInt32::SharedPtr msg) const
  {
    // Store the latest result
    m_sensorData = msg->data * 3;
    RCLCPP_INFO(this->get_logger(), "RX Result Data = '%d'", msg->data);
  }

  // The subscription device
  rclcpp::Subscription<std_msgs::msg::UInt32>::SharedPtr m_subscription;

  // The publisher device
  rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr m_publisher;

  // The timer device
  rclcpp::TimerBase::SharedPtr m_timer;

  // Some data to pass around
  mutable uint32_t m_sensorData;
};

int main(int argc, char * argv[])
{
  srand(8675309);
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NodeOne>());
  rclcpp::shutdown();
  return 0;
}