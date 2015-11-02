// Generated by gencpp from file autopilot_bridge/TimedAction.msg
// DO NOT EDIT!


#ifndef AUTOPILOT_BRIDGE_MESSAGE_TIMEDACTION_H
#define AUTOPILOT_BRIDGE_MESSAGE_TIMEDACTION_H

#include <ros/service_traits.h>


#include <autopilot_bridge/TimedActionRequest.h>
#include <autopilot_bridge/TimedActionResponse.h>


namespace autopilot_bridge
{

struct TimedAction
{

typedef TimedActionRequest Request;
typedef TimedActionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TimedAction
} // namespace autopilot_bridge


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::autopilot_bridge::TimedAction > {
  static const char* value()
  {
    return "64f472a0a4b1503ba77d41b239c07c42";
  }

  static const char* value(const ::autopilot_bridge::TimedAction&) { return value(); }
};

template<>
struct DataType< ::autopilot_bridge::TimedAction > {
  static const char* value()
  {
    return "autopilot_bridge/TimedAction";
  }

  static const char* value(const ::autopilot_bridge::TimedAction&) { return value(); }
};


// service_traits::MD5Sum< ::autopilot_bridge::TimedActionRequest> should match 
// service_traits::MD5Sum< ::autopilot_bridge::TimedAction > 
template<>
struct MD5Sum< ::autopilot_bridge::TimedActionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::autopilot_bridge::TimedAction >::value();
  }
  static const char* value(const ::autopilot_bridge::TimedActionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::autopilot_bridge::TimedActionRequest> should match 
// service_traits::DataType< ::autopilot_bridge::TimedAction > 
template<>
struct DataType< ::autopilot_bridge::TimedActionRequest>
{
  static const char* value()
  {
    return DataType< ::autopilot_bridge::TimedAction >::value();
  }
  static const char* value(const ::autopilot_bridge::TimedActionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::autopilot_bridge::TimedActionResponse> should match 
// service_traits::MD5Sum< ::autopilot_bridge::TimedAction > 
template<>
struct MD5Sum< ::autopilot_bridge::TimedActionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::autopilot_bridge::TimedAction >::value();
  }
  static const char* value(const ::autopilot_bridge::TimedActionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::autopilot_bridge::TimedActionResponse> should match 
// service_traits::DataType< ::autopilot_bridge::TimedAction > 
template<>
struct DataType< ::autopilot_bridge::TimedActionResponse>
{
  static const char* value()
  {
    return DataType< ::autopilot_bridge::TimedAction >::value();
  }
  static const char* value(const ::autopilot_bridge::TimedActionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AUTOPILOT_BRIDGE_MESSAGE_TIMEDACTION_H