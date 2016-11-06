/*
 * input_node.cpp
 *
 *  Created on: 2016/11/6
 *      Author: dandelion1124
 */
#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "input_node");

    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("input_message", 100);
    ros::Rate rate(1);
    std_msgs::String msg;

    while (ros::ok())
    {
        pub.publish(msg);
        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}