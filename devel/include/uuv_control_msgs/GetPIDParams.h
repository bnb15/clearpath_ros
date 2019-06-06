// Generated by gencpp from file uuv_control_msgs/GetPIDParams.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_GETPIDPARAMS_H
#define UUV_CONTROL_MSGS_MESSAGE_GETPIDPARAMS_H

#include <ros/service_traits.h>


#include <uuv_control_msgs/GetPIDParamsRequest.h>
#include <uuv_control_msgs/GetPIDParamsResponse.h>


namespace uuv_control_msgs
{

struct GetPIDParams
{

typedef GetPIDParamsRequest Request;
typedef GetPIDParamsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetPIDParams
} // namespace uuv_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uuv_control_msgs::GetPIDParams > {
  static const char* value()
  {
    return "1dae001799e4bc231c788fb194cf733a";
  }

  static const char* value(const ::uuv_control_msgs::GetPIDParams&) { return value(); }
};

template<>
struct DataType< ::uuv_control_msgs::GetPIDParams > {
  static const char* value()
  {
    return "uuv_control_msgs/GetPIDParams";
  }

  static const char* value(const ::uuv_control_msgs::GetPIDParams&) { return value(); }
};


// service_traits::MD5Sum< ::uuv_control_msgs::GetPIDParamsRequest> should match 
// service_traits::MD5Sum< ::uuv_control_msgs::GetPIDParams > 
template<>
struct MD5Sum< ::uuv_control_msgs::GetPIDParamsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_control_msgs::GetPIDParams >::value();
  }
  static const char* value(const ::uuv_control_msgs::GetPIDParamsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_control_msgs::GetPIDParamsRequest> should match 
// service_traits::DataType< ::uuv_control_msgs::GetPIDParams > 
template<>
struct DataType< ::uuv_control_msgs::GetPIDParamsRequest>
{
  static const char* value()
  {
    return DataType< ::uuv_control_msgs::GetPIDParams >::value();
  }
  static const char* value(const ::uuv_control_msgs::GetPIDParamsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uuv_control_msgs::GetPIDParamsResponse> should match 
// service_traits::MD5Sum< ::uuv_control_msgs::GetPIDParams > 
template<>
struct MD5Sum< ::uuv_control_msgs::GetPIDParamsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_control_msgs::GetPIDParams >::value();
  }
  static const char* value(const ::uuv_control_msgs::GetPIDParamsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_control_msgs::GetPIDParamsResponse> should match 
// service_traits::DataType< ::uuv_control_msgs::GetPIDParams > 
template<>
struct DataType< ::uuv_control_msgs::GetPIDParamsResponse>
{
  static const char* value()
  {
    return DataType< ::uuv_control_msgs::GetPIDParams >::value();
  }
  static const char* value(const ::uuv_control_msgs::GetPIDParamsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_GETPIDPARAMS_H