// Generated by gencpp from file uuv_sensor_ros_plugins_msgs/DVLBeam.msg
// DO NOT EDIT!


#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_DVLBEAM_H
#define UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_DVLBEAM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace uuv_sensor_ros_plugins_msgs
{
template <class ContainerAllocator>
struct DVLBeam_
{
  typedef DVLBeam_<ContainerAllocator> Type;

  DVLBeam_()
    : range(0.0)
    , range_covariance(0.0)
    , velocity(0.0)
    , velocity_covariance(0.0)
    , pose()  {
    }
  DVLBeam_(const ContainerAllocator& _alloc)
    : range(0.0)
    , range_covariance(0.0)
    , velocity(0.0)
    , velocity_covariance(0.0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef double _range_type;
  _range_type range;

   typedef double _range_covariance_type;
  _range_covariance_type range_covariance;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef double _velocity_covariance_type;
  _velocity_covariance_type velocity_covariance;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> const> ConstPtr;

}; // struct DVLBeam_

typedef ::uuv_sensor_ros_plugins_msgs::DVLBeam_<std::allocator<void> > DVLBeam;

typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::DVLBeam > DVLBeamPtr;
typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::DVLBeam const> DVLBeamConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_sensor_ros_plugins_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'uuv_sensor_ros_plugins_msgs': ['/home/ubuntu/workspace/clearpath_ros/src/uuv_simulator/uuv_sensor_plugins/uuv_sensor_ros_plugins_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e6a08aaf7a740b2c17ba2ab21dac602";
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e6a08aaf7a740b2ULL;
  static const uint64_t static_value2 = 0xc17ba2ab21dac602ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_sensor_ros_plugins_msgs/DVLBeam";
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The UUV Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"# measured range [m] or < 0 if invalid\n"
"float64 range\n"
"float64 range_covariance\n"
"\n"
"float64 velocity # measured velocity [m/s] of corr. beam\n"
"float64 velocity_covariance\n"
"\n"
"# Beam link pose wrt DVL link frame\n"
"geometry_msgs/PoseStamped pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.range);
      stream.next(m.range_covariance);
      stream.next(m.velocity);
      stream.next(m.velocity_covariance);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DVLBeam_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_sensor_ros_plugins_msgs::DVLBeam_<ContainerAllocator>& v)
  {
    s << indent << "range: ";
    Printer<double>::stream(s, indent + "  ", v.range);
    s << indent << "range_covariance: ";
    Printer<double>::stream(s, indent + "  ", v.range_covariance);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "velocity_covariance: ";
    Printer<double>::stream(s, indent + "  ", v.velocity_covariance);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_DVLBEAM_H
