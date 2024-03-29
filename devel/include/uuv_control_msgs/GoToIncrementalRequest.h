// Generated by gencpp from file uuv_control_msgs/GoToIncrementalRequest.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_GOTOINCREMENTALREQUEST_H
#define UUV_CONTROL_MSGS_MESSAGE_GOTOINCREMENTALREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct GoToIncrementalRequest_
{
  typedef GoToIncrementalRequest_<ContainerAllocator> Type;

  GoToIncrementalRequest_()
    : step()
    , max_forward_speed(0.0)
    , interpolator()  {
    }
  GoToIncrementalRequest_(const ContainerAllocator& _alloc)
    : step(_alloc)
    , max_forward_speed(0.0)
    , interpolator(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _step_type;
  _step_type step;

   typedef double _max_forward_speed_type;
  _max_forward_speed_type max_forward_speed;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _interpolator_type;
  _interpolator_type interpolator;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  LIPB;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CUBIC;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DUBINS;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  LINEAR;

  typedef boost::shared_ptr< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GoToIncrementalRequest_

typedef ::uuv_control_msgs::GoToIncrementalRequest_<std::allocator<void> > GoToIncrementalRequest;

typedef boost::shared_ptr< ::uuv_control_msgs::GoToIncrementalRequest > GoToIncrementalRequestPtr;
typedef boost::shared_ptr< ::uuv_control_msgs::GoToIncrementalRequest const> GoToIncrementalRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      GoToIncrementalRequest_<ContainerAllocator>::LIPB =
        
          "'lipb'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      GoToIncrementalRequest_<ContainerAllocator>::CUBIC =
        
          "'cubic'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      GoToIncrementalRequest_<ContainerAllocator>::DUBINS =
        
          "'dubins'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      GoToIncrementalRequest_<ContainerAllocator>::LINEAR =
        
          "'linear'"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "83b72c3bd49f592c1f3511f3c61026e3";
  }

  static const char* value(const ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x83b72c3bd49f592cULL;
  static const uint64_t static_value2 = 0x1f3511f3c61026e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/GoToIncrementalRequest";
  }

  static const char* value(const ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >
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
"geometry_msgs/Point step\n"
"float64 max_forward_speed\n"
"string interpolator\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.step);
      stream.next(m.max_forward_speed);
      stream.next(m.interpolator);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GoToIncrementalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::GoToIncrementalRequest_<ContainerAllocator>& v)
  {
    s << indent << "step: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.step);
    s << indent << "max_forward_speed: ";
    Printer<double>::stream(s, indent + "  ", v.max_forward_speed);
    s << indent << "interpolator: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.interpolator);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_GOTOINCREMENTALREQUEST_H
