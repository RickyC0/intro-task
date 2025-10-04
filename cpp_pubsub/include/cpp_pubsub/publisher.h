#ifndef CPP_PUBSUB__PUBLISHER_H_
#define CPP_PUBSUB__PUBLISHER_H_

//Added the path to this file in .vscode/c_cpp_properties.json otherwise it was not finding it but the project was building fine
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class PublisherNode : public rclcpp::Node {
public:
    PublisherNode();

private:
    //Exactly what the publisher will do after x amount of time
    //Broadcast a message
    void timer_callback();

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
};

#endif  // CPP_PUBSUB__PUBLISHER_H_
