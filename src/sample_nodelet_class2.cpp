/*
 * sample_nodelet_class2.cpp
 *
 *  Created on: 2016/10/30
 *      Author: dandelion1124
 */
#include "sample_nodelet_class2.h"
#include <pluginlib/class_list_macros.h>

namespace sample_nodelet_ns
{
SampleNodeletClass2::SampleNodeletClass2()
{
    ROS_INFO("SampleNodeletClass2 Constructor");
}

SampleNodeletClass2::~SampleNodeletClass2()
{
    ROS_INFO("SampleNodeletClass2 Destructor");
}

void SampleNodeletClass2::onInit()
{
    nh  = getNodeHandle();
    pub = nh.advertise<std_msgs::String>("output_message", 100);
    sub = nh.subscribe("message", 100, &SampleNodeletClass2::messageCb, this);

    NODELET_INFO("SampleNodeletClass2 - %s", __FUNCTION__);
}

void SampleNodeletClass2::messageCb(const std_msgs::StringConstPtr& msg)
{
    std_msgs::String msg2;
    pub.publish(msg2);
    NODELET_INFO("SampleNodeletClass2 - %s", __FUNCTION__);
}
} // namespace sample_nodelet_ns

PLUGINLIB_EXPORT_CLASS(sample_nodelet_ns::SampleNodeletClass2, nodelet::Nodelet)