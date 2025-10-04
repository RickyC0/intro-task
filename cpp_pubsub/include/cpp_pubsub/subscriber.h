#ifndef CPP_PUBSUB__SUBSCRIBER_H_
#define CPP_PUBSUB__SUBSCRIBER_H_

//Added the path to this file in .vscode/c_cpp_properties.json otherwise it was not finding it but the project was building fine
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class SubscriberNode : public rclcpp::Node {
public:
    SubscriberNode();

private:
    //Exactly what the subscriber will do
    //Listen for any message coming from the topic
    void topic_callback(const std_msgs::msg::String & msg);

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

#endif  // CPP_PUBSUB__SUBSCRIBER_H_
