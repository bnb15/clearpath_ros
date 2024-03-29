// Generated by gencpp from file uuv_sensor_ros_plugins_msgs/Salinity.msg
// DO NOT EDIT!


#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_SALINITY_H
#define UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_SALINITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace uuv_sensor_ros_plugins_msgs
{
template <class ContainerAllocator>
struct Salinity_
{
  typedef Salinity_<ContainerAllocator> Type;

  Salinity_()
    : header()
    , salinity(0.0)
    , variance(0.0)
    , unit()  {
    }
  Salinity_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , salinity(0.0)
    , variance(0.0)
    , unit(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _salinity_type;
  _salinity_type salinity;

   typedef double _variance_type;
  _variance_type variance;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _unit_type;
  _unit_type unit;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PSU;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PPM;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PPT;

  typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> const> ConstPtr;

}; // struct Salinity_

typedef ::uuv_sensor_ros_plugins_msgs::Salinity_<std::allocator<void> > Salinity;

typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::Salinity > SalinityPtr;
typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::Salinity const> SalinityConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Salinity_<ContainerAllocator>::PSU =
        
          "\"psu\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Salinity_<ContainerAllocator>::PPM =
        
          "\"ppm\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Salinity_<ContainerAllocator>::PPT =
        
          "\"ppt\""
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_sensor_ros_plugins_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'uuv_sensor_ros_plugins_msgs': ['/home/ubuntu/workspace/clearpath_ros/src/uuv_simulator/uuv_sensor_plugins/uuv_sensor_ros_plugins_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d20de37b8b3a344b3f4c36f2192b257";
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d20de37b8b3a344ULL;
  static const uint64_t static_value2 = 0xb3f4c36f2192b257ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_sensor_ros_plugins_msgs/Salinity";
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >
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
"# Practical salinity units\n"
"string PSU=\"psu\"\n"
"# Parts per million\n"
"string PPM=\"ppm\"\n"
"# Parts per thousand\n"
"string PPT=\"ppt\"\n"
"\n"
"std_msgs/Header header\n"
"float64 salinity\n"
"float64 variance\n"
"string unit\n"
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
;
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.salinity);
      stream.next(m.variance);
      stream.next(m.unit);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Salinity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_sensor_ros_plugins_msgs::Salinity_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "salinity: ";
    Printer<double>::stream(s, indent + "  ", v.salinity);
    s << indent << "variance: ";
    Printer<double>::stream(s, indent + "  ", v.variance);
    s << indent << "unit: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.unit);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_SALINITY_H
