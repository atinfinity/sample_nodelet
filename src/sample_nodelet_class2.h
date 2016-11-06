/*
 * sample_nodelet_class2.h
 *
 *  Created on: 2016/10/30
 *      Author: dandelion1124
 */
#ifndef SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS2_H_
#define SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS2_H_
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <nodelet/nodelet.h>

namespace sample_nodelet_ns
{
class SampleNodeletClass2 : public nodelet::Nodelet
{
public:
    SampleNodeletClass2();
    ~SampleNodeletClass2();

    virtual void onInit();

private:
    void messageCb(const std_msgs::StringConstPtr& msg);

    ros::NodeHandle nh;
    ros::Publisher pub;
    ros::Subscriber sub;
};
} // namespace sample_nodelet_ns

#endif /* SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS2_H_ */