/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-groovy-hector-quadrotor-0.2.3/debian/ros-groovy-hector-quadrotor/opt/ros/groovy/stacks/hector_quadrotor/hector_uav_msgs/msg/MotorPWM.msg */
#ifndef HECTOR_UAV_MSGS_MESSAGE_MOTORPWM_H
#define HECTOR_UAV_MSGS_MESSAGE_MOTORPWM_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace hector_uav_msgs
{
template <class ContainerAllocator>
struct MotorPWM_ {
  typedef MotorPWM_<ContainerAllocator> Type;

  MotorPWM_()
  : header()
  , pwm()
  {
  }

  MotorPWM_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , pwm(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _pwm_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  pwm;


  typedef boost::shared_ptr< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_uav_msgs::MotorPWM_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MotorPWM
typedef  ::hector_uav_msgs::MotorPWM_<std::allocator<void> > MotorPWM;

typedef boost::shared_ptr< ::hector_uav_msgs::MotorPWM> MotorPWMPtr;
typedef boost::shared_ptr< ::hector_uav_msgs::MotorPWM const> MotorPWMConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hector_uav_msgs::MotorPWM_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hector_uav_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hector_uav_msgs::MotorPWM_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> > {
  static const char* value() 
  {
    return "42f78dd80f99e0208248b8a257b8a645";
  }

  static const char* value(const  ::hector_uav_msgs::MotorPWM_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x42f78dd80f99e020ULL;
  static const uint64_t static_value2 = 0x8248b8a257b8a645ULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_uav_msgs/MotorPWM";
  }

  static const char* value(const  ::hector_uav_msgs::MotorPWM_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint8[] pwm\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::hector_uav_msgs::MotorPWM_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hector_uav_msgs::MotorPWM_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.pwm);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MotorPWM_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_uav_msgs::MotorPWM_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hector_uav_msgs::MotorPWM_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pwm[]" << std::endl;
    for (size_t i = 0; i < v.pwm.size(); ++i)
    {
      s << indent << "  pwm[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.pwm[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HECTOR_UAV_MSGS_MESSAGE_MOTORPWM_H

