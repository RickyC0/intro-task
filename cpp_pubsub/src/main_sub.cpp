#include "../include/cpp_pubsub/subscriber.h"


int main(int argc, char **argv){
    rclcpp::init(argc,argv);

    rclcpp::spin(std::make_shared<SubscriberNode>());

    rclcpp::shutdown();

    return 0;
}