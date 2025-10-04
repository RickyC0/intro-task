#include "../include/cpp_pubsub/publisher.h"

using namespace std::chrono_literals;

PublisherNode::PublisherNode()
: Node("publisher_node"), count_(0)
{
    publisher_ = this->create_publisher<std_msgs::msg::String>("intro", 10);

    timer_ = this->create_wall_timer(
        500ms,
        std::bind(&PublisherNode::timer_callback, this)
    );
}

void PublisherNode::timer_callback()
{
    auto message = std_msgs::msg::String();
    message.data = "Space Concordia Intro!" + std::to_string(count_++);
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
}
