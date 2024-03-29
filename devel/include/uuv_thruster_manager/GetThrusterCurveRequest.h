// Generated by gencpp from file uuv_thruster_manager/GetThrusterCurveRequest.msg
// DO NOT EDIT!


#ifndef UUV_THRUSTER_MANAGER_MESSAGE_GETTHRUSTERCURVEREQUEST_H
#define UUV_THRUSTER_MANAGER_MESSAGE_GETTHRUSTERCURVEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_thruster_manager
{
template <class ContainerAllocator>
struct GetThrusterCurveRequest_
{
  typedef GetThrusterCurveRequest_<ContainerAllocator> Type;

  GetThrusterCurveRequest_()
    : min(0.0)
    , max(0.0)
    , n_points(0)  {
    }
  GetThrusterCurveRequest_(const ContainerAllocator& _alloc)
    : min(0.0)
    , max(0.0)
    , n_points(0)  {
  (void)_alloc;
    }



   typedef double _min_type;
  _min_type min;

   typedef double _max_type;
  _max_type max;

   typedef int32_t _n_points_type;
  _n_points_type n_points;





  typedef boost::shared_ptr< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetThrusterCurveRequest_

typedef ::uuv_thruster_manager::GetThrusterCurveRequest_<std::allocator<void> > GetThrusterCurveRequest;

typedef boost::shared_ptr< ::uuv_thruster_manager::GetThrusterCurveRequest > GetThrusterCurveRequestPtr;
typedef boost::shared_ptr< ::uuv_thruster_manager::GetThrusterCurveRequest const> GetThrusterCurveRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_thruster_manager

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b8a1df953063c9de5f9a6419991fa0c";
  }

  static const char* value(const ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b8a1df953063c9dULL;
  static const uint64_t static_value2 = 0xe5f9a6419991fa0cULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_thruster_manager/GetThrusterCurveRequest";
  }

  static const char* value(const ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >
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
"float64 min\n"
"float64 max\n"
"int32 n_points\n"
;
  }

  static const char* value(const ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.min);
      stream.next(m.max);
      stream.next(m.n_points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetThrusterCurveRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_thruster_manager::GetThrusterCurveRequest_<ContainerAllocator>& v)
  {
    s << indent << "min: ";
    Printer<double>::stream(s, indent + "  ", v.min);
    s << indent << "max: ";
    Printer<double>::stream(s, indent + "  ", v.max);
    s << indent << "n_points: ";
    Printer<int32_t>::stream(s, indent + "  ", v.n_points);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_THRUSTER_MANAGER_MESSAGE_GETTHRUSTERCURVEREQUEST_H
