#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;


class NodeAlpha : public rclcpp::Node
{
public:
  NodeAlpha() : Node("node_alpha"), m_count(0)
  {
    m_publisher = this->create_publisher<std_msgs::msg::String>("alpha_publish", 10);
    m_subscription = this->create_subscription<std_msgs::msg::String>(
      "one_publish", 10, std::bind(&NodeAlpha::topic_callback, this, _1));
    m_timer = this->create_wall_timer(
      500ms, std::bind(&NodeAlpha::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = std_msgs::msg::String();
    message.data = "Hello, world! " + std::to_string(m_count++);
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    m_publisher->publish(message);
  }

  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr m_subscription;
  rclcpp::TimerBase::SharedPtr m_timer;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr m_publisher;
  size_t m_count;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NodeAlpha>());
  rclcpp::shutdown();
  return 0;
}