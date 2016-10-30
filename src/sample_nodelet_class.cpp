/*
 * sample_nodelet_class.cpp
 *
 *  Created on: 2016/10/30
 *      Author: dandelion1124
 */
#include "sample_nodelet_class.h"
#include <pluginlib/class_list_macros.h>

namespace sample_nodelet_ns
{
SampleNodeletClass::SampleNodeletClass()
{
    ROS_INFO("SampleNodeletClass Constructor");
}

SampleNodeletClass::~SampleNodeletClass()
{
    ROS_INFO("SampleNodeletClass Destructor");
}

void SampleNodeletClass::onInit()
{
    nh = getNodeHandle();
    timer = nh.createTimer(ros::Duration(1.0), boost::bind(&SampleNodeletClass::timerCb, this));
    NODELET_INFO("SampleNodeletClass - %s", __FUNCTION__);
}

void SampleNodeletClass::timerCb()
{
    NODELET_INFO("SampleNodeletClass - %s", __FUNCTION__);
}
} // namespace sample_nodelet_ns

PLUGINLIB_EXPORT_CLASS(sample_nodelet_ns::SampleNodeletClass, nodelet::Nodelet)
