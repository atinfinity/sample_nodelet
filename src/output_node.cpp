/*
 * output_node.cpp
 *
 *  Created on: 2016/11/6
 *      Author: dandelion1124
 */
#include <ros/ros.h>
#include <std_msgs/String.h>

void messageCb(const std_msgs::StringConstPtr& msg)
{
    ROS_INFO("output_node - %s", __FUNCTION__);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "output_node");

    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("output_message", 100, messageCb);
    ros::spin();

    return 0;
}