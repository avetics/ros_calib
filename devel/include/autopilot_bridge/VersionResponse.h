// Generated by gencpp from file autopilot_bridge/VersionResponse.msg
// DO NOT EDIT!


#ifndef AUTOPILOT_BRIDGE_MESSAGE_VERSIONRESPONSE_H
#define AUTOPILOT_BRIDGE_MESSAGE_VERSIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autopilot_bridge
{
template <class ContainerAllocator>
struct VersionResponse_
{
  typedef VersionResponse_<ContainerAllocator> Type;

  VersionResponse_()
    : ok(false)
    , cap_mission_float(false)
    , cap_param_float(false)
    , cap_mission_int(false)
    , cap_command_int(false)
    , cap_param_union(false)
    , cap_ftp(false)
    , cap_set_attitude(false)
    , cap_set_position_local(false)
    , cap_set_position_global(false)
    , cap_terrain(false)
    , cap_set_actuator(false)
    , flight_sw(0)
    , middleware(0)
    , os_sw(0)
    , board(0)
    , flight_custom()
    , middleware_custom()
    , os_custom()
    , vendor_id(0)
    , product_id(0)
    , uid(0)  {
    }
  VersionResponse_(const ContainerAllocator& _alloc)
    : ok(false)
    , cap_mission_float(false)
    , cap_param_float(false)
    , cap_mission_int(false)
    , cap_command_int(false)
    , cap_param_union(false)
    , cap_ftp(false)
    , cap_set_attitude(false)
    , cap_set_position_local(false)
    , cap_set_position_global(false)
    , cap_terrain(false)
    , cap_set_actuator(false)
    , flight_sw(0)
    , middleware(0)
    , os_sw(0)
    , board(0)
    , flight_custom(_alloc)
    , middleware_custom(_alloc)
    , os_custom(_alloc)
    , vendor_id(0)
    , product_id(0)
    , uid(0)  {
    }



   typedef uint8_t _ok_type;
  _ok_type ok;

   typedef uint8_t _cap_mission_float_type;
  _cap_mission_float_type cap_mission_float;

   typedef uint8_t _cap_param_float_type;
  _cap_param_float_type cap_param_float;

   typedef uint8_t _cap_mission_int_type;
  _cap_mission_int_type cap_mission_int;

   typedef uint8_t _cap_command_int_type;
  _cap_command_int_type cap_command_int;

   typedef uint8_t _cap_param_union_type;
  _cap_param_union_type cap_param_union;

   typedef uint8_t _cap_ftp_type;
  _cap_ftp_type cap_ftp;

   typedef uint8_t _cap_set_attitude_type;
  _cap_set_attitude_type cap_set_attitude;

   typedef uint8_t _cap_set_position_local_type;
  _cap_set_position_local_type cap_set_position_local;

   typedef uint8_t _cap_set_position_global_type;
  _cap_set_position_global_type cap_set_position_global;

   typedef uint8_t _cap_terrain_type;
  _cap_terrain_type cap_terrain;

   typedef uint8_t _cap_set_actuator_type;
  _cap_set_actuator_type cap_set_actuator;

   typedef uint32_t _flight_sw_type;
  _flight_sw_type flight_sw;

   typedef uint32_t _middleware_type;
  _middleware_type middleware;

   typedef uint32_t _os_sw_type;
  _os_sw_type os_sw;

   typedef uint32_t _board_type;
  _board_type board;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _flight_custom_type;
  _flight_custom_type flight_custom;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _middleware_custom_type;
  _middleware_custom_type middleware_custom;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _os_custom_type;
  _os_custom_type os_custom;

   typedef uint16_t _vendor_id_type;
  _vendor_id_type vendor_id;

   typedef uint16_t _product_id_type;
  _product_id_type product_id;

   typedef uint64_t _uid_type;
  _uid_type uid;




  typedef boost::shared_ptr< ::autopilot_bridge::VersionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autopilot_bridge::VersionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct VersionResponse_

typedef ::autopilot_bridge::VersionResponse_<std::allocator<void> > VersionResponse;

typedef boost::shared_ptr< ::autopilot_bridge::VersionResponse > VersionResponsePtr;
typedef boost::shared_ptr< ::autopilot_bridge::VersionResponse const> VersionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autopilot_bridge::VersionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::VersionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::VersionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::VersionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3a54d10b293524b11c9bf9aa69a0565";
  }

  static const char* value(const ::autopilot_bridge::VersionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3a54d10b293524bULL;
  static const uint64_t static_value2 = 0x11c9bf9aa69a0565ULL;
};

template<class ContainerAllocator>
struct DataType< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autopilot_bridge/VersionResponse";
  }

  static const char* value(const ::autopilot_bridge::VersionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ok\n\
bool cap_mission_float\n\
bool cap_param_float\n\
bool cap_mission_int\n\
bool cap_command_int\n\
bool cap_param_union\n\
bool cap_ftp\n\
bool cap_set_attitude\n\
bool cap_set_position_local\n\
bool cap_set_position_global\n\
bool cap_terrain\n\
bool cap_set_actuator\n\
uint32 flight_sw\n\
uint32 middleware\n\
uint32 os_sw\n\
uint32 board\n\
string flight_custom\n\
string middleware_custom\n\
string os_custom\n\
uint16 vendor_id\n\
uint16 product_id\n\
uint64 uid\n\
\n\
";
  }

  static const char* value(const ::autopilot_bridge::VersionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ok);
      stream.next(m.cap_mission_float);
      stream.next(m.cap_param_float);
      stream.next(m.cap_mission_int);
      stream.next(m.cap_command_int);
      stream.next(m.cap_param_union);
      stream.next(m.cap_ftp);
      stream.next(m.cap_set_attitude);
      stream.next(m.cap_set_position_local);
      stream.next(m.cap_set_position_global);
      stream.next(m.cap_terrain);
      stream.next(m.cap_set_actuator);
      stream.next(m.flight_sw);
      stream.next(m.middleware);
      stream.next(m.os_sw);
      stream.next(m.board);
      stream.next(m.flight_custom);
      stream.next(m.middleware_custom);
      stream.next(m.os_custom);
      stream.next(m.vendor_id);
      stream.next(m.product_id);
      stream.next(m.uid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct VersionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autopilot_bridge::VersionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autopilot_bridge::VersionResponse_<ContainerAllocator>& v)
  {
    s << indent << "ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ok);
    s << indent << "cap_mission_float: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_mission_float);
    s << indent << "cap_param_float: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_param_float);
    s << indent << "cap_mission_int: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_mission_int);
    s << indent << "cap_command_int: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_command_int);
    s << indent << "cap_param_union: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_param_union);
    s << indent << "cap_ftp: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_ftp);
    s << indent << "cap_set_attitude: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_set_attitude);
    s << indent << "cap_set_position_local: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_set_position_local);
    s << indent << "cap_set_position_global: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_set_position_global);
    s << indent << "cap_terrain: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_terrain);
    s << indent << "cap_set_actuator: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cap_set_actuator);
    s << indent << "flight_sw: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.flight_sw);
    s << indent << "middleware: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.middleware);
    s << indent << "os_sw: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.os_sw);
    s << indent << "board: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.board);
    s << indent << "flight_custom: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.flight_custom);
    s << indent << "middleware_custom: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.middleware_custom);
    s << indent << "os_custom: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.os_custom);
    s << indent << "vendor_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.vendor_id);
    s << indent << "product_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.product_id);
    s << indent << "uid: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.uid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOPILOT_BRIDGE_MESSAGE_VERSIONRESPONSE_H
