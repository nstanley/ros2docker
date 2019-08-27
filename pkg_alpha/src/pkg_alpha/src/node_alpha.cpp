#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;


class NodeAlpha : public rclcpp::Node
{
public:
  NodeAlpha() : Node("node_alpha"), m_resultData(0)
  {
    m_publisher = this->create_publisher<std_msgs::msg::String>("results", 10);
    m_subscription = this->create_subscription<std_msgs::msg::String>(
      "sensor", 10, std::bind(&NodeAlpha::topic_callback, this, _1));
    //m_timer = this->create_wall_timer(
    //  500ms, std::bind(&NodeAlpha::timer_callback, this));
  }

private:

  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "RX Sensor Data: '%s'", msg->data.c_str());
    auto message = std_msgs::msg::String();
    //m_resultData = (m_resultData + 1) * 2;
    message.data = std::to_string(m_resultData);
    RCLCPP_INFO(this->get_logger(), "TX Result Data: '%s'", message.data.c_str());
    m_publisher->publish(message);
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr m_subscription;
  //rclcpp::TimerBase::SharedPtr m_timer;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr m_publisher;
  size_t m_resultData;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NodeAlpha>());
  rclcpp::shutdown();
  return 0;
}