#include "../include/cpp_pubsub/subscriber.h"

SubscriberNode::SubscriberNode()
: Node("subscriber_node")
{
    //first argument: "intro" is the topic we are listening to
    //Second argument: 10 is the size of the input buffer
    //fifth: position of argument at which the message will be passed to the callback (NB: this is an std::placeholder and not an index)
    subscription_ = this->create_subscription<std_msgs::msg::String>(
        "intro", 10,
        std::bind(&SubscriberNode::topic_callback, this, std::placeholders::_1)
    );
}

void SubscriberNode::topic_callback(const std_msgs::msg::String & msg)
{
    RCLCPP_INFO(this->get_logger(), "I, the subscriber, have heard: '%s'", msg.data.c_str());
}
