// Generated by gencpp from file nav_2d_msgs/SwitchPlugin.msg
// DO NOT EDIT!


#ifndef NAV_2D_MSGS_MESSAGE_SWITCHPLUGIN_H
#define NAV_2D_MSGS_MESSAGE_SWITCHPLUGIN_H

#include <ros/service_traits.h>


#include <nav_2d_msgs/SwitchPluginRequest.h>
#include <nav_2d_msgs/SwitchPluginResponse.h>


namespace nav_2d_msgs
{

struct SwitchPlugin
{

typedef SwitchPluginRequest Request;
typedef SwitchPluginResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SwitchPlugin
} // namespace nav_2d_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nav_2d_msgs::SwitchPlugin > {
  static const char* value()
  {
    return "7e1da0f37c644e038a68b98eee3fb836";
  }

  static const char* value(const ::nav_2d_msgs::SwitchPlugin&) { return value(); }
};

template<>
struct DataType< ::nav_2d_msgs::SwitchPlugin > {
  static const char* value()
  {
    return "nav_2d_msgs/SwitchPlugin";
  }

  static const char* value(const ::nav_2d_msgs::SwitchPlugin&) { return value(); }
};


// service_traits::MD5Sum< ::nav_2d_msgs::SwitchPluginRequest> should match
// service_traits::MD5Sum< ::nav_2d_msgs::SwitchPlugin >
template<>
struct MD5Sum< ::nav_2d_msgs::SwitchPluginRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nav_2d_msgs::SwitchPlugin >::value();
  }
  static const char* value(const ::nav_2d_msgs::SwitchPluginRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nav_2d_msgs::SwitchPluginRequest> should match
// service_traits::DataType< ::nav_2d_msgs::SwitchPlugin >
template<>
struct DataType< ::nav_2d_msgs::SwitchPluginRequest>
{
  static const char* value()
  {
    return DataType< ::nav_2d_msgs::SwitchPlugin >::value();
  }
  static const char* value(const ::nav_2d_msgs::SwitchPluginRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nav_2d_msgs::SwitchPluginResponse> should match
// service_traits::MD5Sum< ::nav_2d_msgs::SwitchPlugin >
template<>
struct MD5Sum< ::nav_2d_msgs::SwitchPluginResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nav_2d_msgs::SwitchPlugin >::value();
  }
  static const char* value(const ::nav_2d_msgs::SwitchPluginResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nav_2d_msgs::SwitchPluginResponse> should match
// service_traits::DataType< ::nav_2d_msgs::SwitchPlugin >
template<>
struct DataType< ::nav_2d_msgs::SwitchPluginResponse>
{
  static const char* value()
  {
    return DataType< ::nav_2d_msgs::SwitchPlugin >::value();
  }
  static const char* value(const ::nav_2d_msgs::SwitchPluginResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAV_2D_MSGS_MESSAGE_SWITCHPLUGIN_H