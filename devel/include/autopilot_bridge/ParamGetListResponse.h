// Generated by gencpp from file autopilot_bridge/ParamGetListResponse.msg
// DO NOT EDIT!


#ifndef AUTOPILOT_BRIDGE_MESSAGE_PARAMGETLISTRESPONSE_H
#define AUTOPILOT_BRIDGE_MESSAGE_PARAMGETLISTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <autopilot_bridge/ParamPair.h>

namespace autopilot_bridge
{
template <class ContainerAllocator>
struct ParamGetListResponse_
{
  typedef ParamGetListResponse_<ContainerAllocator> Type;

  ParamGetListResponse_()
    : param()  {
    }
  ParamGetListResponse_(const ContainerAllocator& _alloc)
    : param(_alloc)  {
    }



   typedef std::vector< ::autopilot_bridge::ParamPair_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autopilot_bridge::ParamPair_<ContainerAllocator> >::other >  _param_type;
  _param_type param;




  typedef boost::shared_ptr< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ParamGetListResponse_

typedef ::autopilot_bridge::ParamGetListResponse_<std::allocator<void> > ParamGetListResponse;

typedef boost::shared_ptr< ::autopilot_bridge::ParamGetListResponse > ParamGetListResponsePtr;
typedef boost::shared_ptr< ::autopilot_bridge::ParamGetListResponse const> ParamGetListResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autopilot_bridge

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'autopilot_bridge': ['/home/jinahadam/catkin_ws/src/autopilot_bridge/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ad4bd52a388b0c97e78555e2513d443";
  }

  static const char* value(const ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ad4bd52a388b0c9ULL;
  static const uint64_t static_value2 = 0x7e78555e2513d443ULL;
};

template<class ContainerAllocator>
struct DataType< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autopilot_bridge/ParamGetListResponse";
  }

  static const char* value(const ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ParamPair[] param\n\
\n\
\n\
================================================================================\n\
MSG: autopilot_bridge/ParamPair\n\
string name\n\
float64 value\n\
";
  }

  static const char* value(const ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.param);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ParamGetListResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autopilot_bridge::ParamGetListResponse_<ContainerAllocator>& v)
  {
    s << indent << "param[]" << std::endl;
    for (size_t i = 0; i < v.param.size(); ++i)
    {
      s << indent << "  param[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autopilot_bridge::ParamPair_<ContainerAllocator> >::stream(s, indent + "    ", v.param[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOPILOT_BRIDGE_MESSAGE_PARAMGETLISTRESPONSE_H