// Generated by gencpp from file autopilot_bridge/WPGetRange.msg
// DO NOT EDIT!


#ifndef AUTOPILOT_BRIDGE_MESSAGE_WPGETRANGE_H
#define AUTOPILOT_BRIDGE_MESSAGE_WPGETRANGE_H

#include <ros/service_traits.h>


#include <autopilot_bridge/WPGetRangeRequest.h>
#include <autopilot_bridge/WPGetRangeResponse.h>


namespace autopilot_bridge
{

struct WPGetRange
{

typedef WPGetRangeRequest Request;
typedef WPGetRangeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct WPGetRange
} // namespace autopilot_bridge


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::autopilot_bridge::WPGetRange > {
  static const char* value()
  {
    return "a5c104ffb8d6e855f74938b0261a09c9";
  }

  static const char* value(const ::autopilot_bridge::WPGetRange&) { return value(); }
};

template<>
struct DataType< ::autopilot_bridge::WPGetRange > {
  static const char* value()
  {
    return "autopilot_bridge/WPGetRange";
  }

  static const char* value(const ::autopilot_bridge::WPGetRange&) { return value(); }
};


// service_traits::MD5Sum< ::autopilot_bridge::WPGetRangeRequest> should match 
// service_traits::MD5Sum< ::autopilot_bridge::WPGetRange > 
template<>
struct MD5Sum< ::autopilot_bridge::WPGetRangeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::autopilot_bridge::WPGetRange >::value();
  }
  static const char* value(const ::autopilot_bridge::WPGetRangeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::autopilot_bridge::WPGetRangeRequest> should match 
// service_traits::DataType< ::autopilot_bridge::WPGetRange > 
template<>
struct DataType< ::autopilot_bridge::WPGetRangeRequest>
{
  static const char* value()
  {
    return DataType< ::autopilot_bridge::WPGetRange >::value();
  }
  static const char* value(const ::autopilot_bridge::WPGetRangeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::autopilot_bridge::WPGetRangeResponse> should match 
// service_traits::MD5Sum< ::autopilot_bridge::WPGetRange > 
template<>
struct MD5Sum< ::autopilot_bridge::WPGetRangeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::autopilot_bridge::WPGetRange >::value();
  }
  static const char* value(const ::autopilot_bridge::WPGetRangeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::autopilot_bridge::WPGetRangeResponse> should match 
// service_traits::DataType< ::autopilot_bridge::WPGetRange > 
template<>
struct DataType< ::autopilot_bridge::WPGetRangeResponse>
{
  static const char* value()
  {
    return DataType< ::autopilot_bridge::WPGetRange >::value();
  }
  static const char* value(const ::autopilot_bridge::WPGetRangeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AUTOPILOT_BRIDGE_MESSAGE_WPGETRANGE_H
