// Generated by gencpp from file uuv_control_msgs/InitRectTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_INITRECTTRAJECTORYREQUEST_H
#define UUV_CONTROL_MSGS_MESSAGE_INITRECTTRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Time.h>
#include <geometry_msgs/Point.h>

namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct InitRectTrajectoryRequest_
{
  typedef InitRectTrajectoryRequest_<ContainerAllocator> Type;

  InitRectTrajectoryRequest_()
    : start_time()
    , start_now(false)
    , origin()
    , height(0.0)
    , width(0.0)
    , angle_offset(0.0)
    , heading_offset(0.0)
    , max_forward_speed(0.0)  {
    }
  InitRectTrajectoryRequest_(const ContainerAllocator& _alloc)
    : start_time(_alloc)
    , start_now(false)
    , origin(_alloc)
    , height(0.0)
    , width(0.0)
    , angle_offset(0.0)
    , heading_offset(0.0)
    , max_forward_speed(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Time_<ContainerAllocator>  _start_time_type;
  _start_time_type start_time;

   typedef uint8_t _start_now_type;
  _start_now_type start_now;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _origin_type;
  _origin_type origin;

   typedef double _height_type;
  _height_type height;

   typedef double _width_type;
  _width_type width;

   typedef double _angle_offset_type;
  _angle_offset_type angle_offset;

   typedef double _heading_offset_type;
  _heading_offset_type heading_offset;

   typedef double _max_forward_speed_type;
  _max_forward_speed_type max_forward_speed;





  typedef boost::shared_ptr< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InitRectTrajectoryRequest_

typedef ::uuv_control_msgs::InitRectTrajectoryRequest_<std::allocator<void> > InitRectTrajectoryRequest;

typedef boost::shared_ptr< ::uuv_control_msgs::InitRectTrajectoryRequest > InitRectTrajectoryRequestPtr;
typedef boost::shared_ptr< ::uuv_control_msgs::InitRectTrajectoryRequest const> InitRectTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'uuv_control_msgs': ['/home/ubuntu/workspace/clearpath_ros/src/uuv_simulator/uuv_control/uuv_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82860775b3df6259cef2af6522eca70e";
  }

  static const char* value(const ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82860775b3df6259ULL;
  static const uint64_t static_value2 = 0xcef2af6522eca70eULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/InitRectTrajectoryRequest";
  }

  static const char* value(const ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"std_msgs/Time start_time\n"
"bool start_now\n"
"geometry_msgs/Point origin\n"
"float64 height\n"
"float64 width\n"
"float64 angle_offset\n"
"float64 heading_offset\n"
"float64 max_forward_speed\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Time\n"
"time data\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start_time);
      stream.next(m.start_now);
      stream.next(m.origin);
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.angle_offset);
      stream.next(m.heading_offset);
      stream.next(m.max_forward_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InitRectTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::InitRectTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "start_time: ";
    s << std::endl;
    Printer< ::std_msgs::Time_<ContainerAllocator> >::stream(s, indent + "  ", v.start_time);
    s << indent << "start_now: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.start_now);
    s << indent << "origin: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.origin);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<double>::stream(s, indent + "  ", v.width);
    s << indent << "angle_offset: ";
    Printer<double>::stream(s, indent + "  ", v.angle_offset);
    s << indent << "heading_offset: ";
    Printer<double>::stream(s, indent + "  ", v.heading_offset);
    s << indent << "max_forward_speed: ";
    Printer<double>::stream(s, indent + "  ", v.max_forward_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_INITRECTTRAJECTORYREQUEST_H
