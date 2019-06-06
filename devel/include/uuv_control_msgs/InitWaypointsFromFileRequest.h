// Generated by gencpp from file uuv_control_msgs/InitWaypointsFromFileRequest.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_INITWAYPOINTSFROMFILEREQUEST_H
#define UUV_CONTROL_MSGS_MESSAGE_INITWAYPOINTSFROMFILEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Time.h>
#include <std_msgs/String.h>
#include <std_msgs/String.h>

namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct InitWaypointsFromFileRequest_
{
  typedef InitWaypointsFromFileRequest_<ContainerAllocator> Type;

  InitWaypointsFromFileRequest_()
    : start_time()
    , start_now(false)
    , filename()
    , interpolator()  {
    }
  InitWaypointsFromFileRequest_(const ContainerAllocator& _alloc)
    : start_time(_alloc)
    , start_now(false)
    , filename(_alloc)
    , interpolator(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Time_<ContainerAllocator>  _start_time_type;
  _start_time_type start_time;

   typedef uint8_t _start_now_type;
  _start_now_type start_now;

   typedef  ::std_msgs::String_<ContainerAllocator>  _filename_type;
  _filename_type filename;

   typedef  ::std_msgs::String_<ContainerAllocator>  _interpolator_type;
  _interpolator_type interpolator;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  LIPB;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CUBIC;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DUBINS;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  LINEAR;

  typedef boost::shared_ptr< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InitWaypointsFromFileRequest_

typedef ::uuv_control_msgs::InitWaypointsFromFileRequest_<std::allocator<void> > InitWaypointsFromFileRequest;

typedef boost::shared_ptr< ::uuv_control_msgs::InitWaypointsFromFileRequest > InitWaypointsFromFileRequestPtr;
typedef boost::shared_ptr< ::uuv_control_msgs::InitWaypointsFromFileRequest const> InitWaypointsFromFileRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      InitWaypointsFromFileRequest_<ContainerAllocator>::LIPB =
        
          "'lipb'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      InitWaypointsFromFileRequest_<ContainerAllocator>::CUBIC =
        
          "'cubic'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      InitWaypointsFromFileRequest_<ContainerAllocator>::DUBINS =
        
          "'dubins'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      InitWaypointsFromFileRequest_<ContainerAllocator>::LINEAR =
        
          "'linear'"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'uuv_control_msgs': ['/home/ubuntu/workspace/clearpath_ros/src/uuv_simulator/uuv_control/uuv_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ddaf659bb5628d87c763d02c9d4cc76b";
  }

  static const char* value(const ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xddaf659bb5628d87ULL;
  static const uint64_t static_value2 = 0xc763d02c9d4cc76bULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/InitWaypointsFromFileRequest";
  }

  static const char* value(const ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >
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
"string LIPB='lipb'\n"
"string CUBIC='cubic'\n"
"string DUBINS='dubins'\n"
"string LINEAR='linear'\n"
"\n"
"std_msgs/Time start_time\n"
"bool start_now\n"
"std_msgs/String filename\n"
"std_msgs/String interpolator\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Time\n"
"time data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start_time);
      stream.next(m.start_now);
      stream.next(m.filename);
      stream.next(m.interpolator);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InitWaypointsFromFileRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::InitWaypointsFromFileRequest_<ContainerAllocator>& v)
  {
    s << indent << "start_time: ";
    s << std::endl;
    Printer< ::std_msgs::Time_<ContainerAllocator> >::stream(s, indent + "  ", v.start_time);
    s << indent << "start_now: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.start_now);
    s << indent << "filename: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.filename);
    s << indent << "interpolator: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.interpolator);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_INITWAYPOINTSFROMFILEREQUEST_H
