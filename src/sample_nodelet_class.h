/*
 * sample_nodelet_class.h
 *
 *  Created on: 2016/10/30
 *      Author: dandelion1124
 */
#ifndef SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_
#define SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <nodelet/nodelet.h>

namespace sample_nodelet_ns
{
class SampleNodeletClass : public nodelet::Nodelet
{
public:
    SampleNodeletClass();
    ~SampleNodeletClass();

    virtual void onInit();

private:
    void timerCb();

    ros::NodeHandle nh;
    ros::Timer timer;
    ros::Publisher pub;
};
} // namespace sample_nodelet_ns

#endif /* SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_ */