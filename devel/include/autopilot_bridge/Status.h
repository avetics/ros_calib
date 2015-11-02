// Generated by gencpp from file autopilot_bridge/Status.msg
// DO NOT EDIT!


#ifndef AUTOPILOT_BRIDGE_MESSAGE_STATUS_H
#define AUTOPILOT_BRIDGE_MESSAGE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autopilot_bridge
{
template <class ContainerAllocator>
struct Status_
{
  typedef Status_<ContainerAllocator> Type;

  Status_()
    : header()
    , mode(0)
    , armed(false)
    , ahrs_ok(false)
    , alt_rel(0)
    , as_ok(false)
    , as_read(0.0)
    , fence_status(0)
    , gps_ok(false)
    , gps_sats(0)
    , gps_eph(0)
    , ins_ok(false)
    , mag_ok(false)
    , mis_cur(0)
    , pwr_ok(false)
    , pwr_batt_rem(0)
    , pwr_batt_vcc(0)
    , pwr_batt_cur(0)  {
    }
  Status_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , mode(0)
    , armed(false)
    , ahrs_ok(false)
    , alt_rel(0)
    , as_ok(false)
    , as_read(0.0)
    , fence_status(0)
    , gps_ok(false)
    , gps_sats(0)
    , gps_eph(0)
    , ins_ok(false)
    , mag_ok(false)
    , mis_cur(0)
    , pwr_ok(false)
    , pwr_batt_rem(0)
    , pwr_batt_vcc(0)
    , pwr_batt_cur(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef uint8_t _armed_type;
  _armed_type armed;

   typedef uint8_t _ahrs_ok_type;
  _ahrs_ok_type ahrs_ok;

   typedef int32_t _alt_rel_type;
  _alt_rel_type alt_rel;

   typedef uint8_t _as_ok_type;
  _as_ok_type as_ok;

   typedef float _as_read_type;
  _as_read_type as_read;

   typedef uint8_t _fence_status_type;
  _fence_status_type fence_status;

   typedef uint8_t _gps_ok_type;
  _gps_ok_type gps_ok;

   typedef uint8_t _gps_sats_type;
  _gps_sats_type gps_sats;

   typedef uint16_t _gps_eph_type;
  _gps_eph_type gps_eph;

   typedef uint8_t _ins_ok_type;
  _ins_ok_type ins_ok;

   typedef uint8_t _mag_ok_type;
  _mag_ok_type mag_ok;

   typedef uint16_t _mis_cur_type;
  _mis_cur_type mis_cur;

   typedef uint8_t _pwr_ok_type;
  _pwr_ok_type pwr_ok;

   typedef int16_t _pwr_batt_rem_type;
  _pwr_batt_rem_type pwr_batt_rem;

   typedef int16_t _pwr_batt_vcc_type;
  _pwr_batt_vcc_type pwr_batt_vcc;

   typedef int16_t _pwr_batt_cur_type;
  _pwr_batt_cur_type pwr_batt_cur;


    enum { MODE_RALLY = 0u };
     enum { MODE_MANUAL = 1u };
     enum { MODE_FBWA = 2u };
     enum { MODE_GUIDED = 3u };
     enum { MODE_AUTO = 4u };
     enum { MODE_FBWB = 5u };
     enum { MODE_CIRCLE = 6u };
     enum { MODE_LOITER = 7u };
     enum { MODE_INITIALIZING = 8u };
     enum { MODE_UNKNOWN = 15u };
     enum { FENCE_NOT_BREACHED = 0u };
     enum { FENCE_BREACHED = 1u };
     enum { FENCE_DISABLED = 2u };
 

  typedef boost::shared_ptr< ::autopilot_bridge::Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autopilot_bridge::Status_<ContainerAllocator> const> ConstPtr;

}; // struct Status_

typedef ::autopilot_bridge::Status_<std::allocator<void> > Status;

typedef boost::shared_ptr< ::autopilot_bridge::Status > StatusPtr;
typedef boost::shared_ptr< ::autopilot_bridge::Status const> StatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autopilot_bridge::Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autopilot_bridge::Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autopilot_bridge

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'autopilot_bridge': ['/home/jinahadam/catkin_ws/src/autopilot_bridge/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::Status_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::Status_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autopilot_bridge::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3fa5b3d92700636ca78bc44bf0a7b17e";
  }

  static const char* value(const ::autopilot_bridge::Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3fa5b3d92700636cULL;
  static const uint64_t static_value2 = 0xa78bc44bf0a7b17eULL;
};

template<class ContainerAllocator>
struct DataType< ::autopilot_bridge::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autopilot_bridge/Status";
  }

  static const char* value(const ::autopilot_bridge::Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autopilot_bridge::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 MODE_RALLY=0\n\
uint8 MODE_MANUAL=1\n\
uint8 MODE_FBWA=2\n\
uint8 MODE_GUIDED=3\n\
uint8 MODE_AUTO=4\n\
uint8 MODE_FBWB=5\n\
uint8 MODE_CIRCLE=6\n\
uint8 MODE_LOITER=7\n\
uint8 MODE_INITIALIZING=8\n\
uint8 MODE_UNKNOWN=15\n\
\n\
uint8 FENCE_NOT_BREACHED=0\n\
uint8 FENCE_BREACHED=1\n\
uint8 FENCE_DISABLED=2\n\
\n\
Header  header\n\
uint8   mode\n\
bool    armed\n\
bool    ahrs_ok\n\
int32   alt_rel\n\
bool    as_ok\n\
float32 as_read\n\
uint8   fence_status\n\
bool    gps_ok\n\
uint8   gps_sats\n\
uint16  gps_eph\n\
bool    ins_ok\n\
bool    mag_ok\n\
uint16  mis_cur\n\
bool    pwr_ok\n\
int16   pwr_batt_rem\n\
int16   pwr_batt_vcc\n\
int16   pwr_batt_cur\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::autopilot_bridge::Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autopilot_bridge::Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.mode);
      stream.next(m.armed);
      stream.next(m.ahrs_ok);
      stream.next(m.alt_rel);
      stream.next(m.as_ok);
      stream.next(m.as_read);
      stream.next(m.fence_status);
      stream.next(m.gps_ok);
      stream.next(m.gps_sats);
      stream.next(m.gps_eph);
      stream.next(m.ins_ok);
      stream.next(m.mag_ok);
      stream.next(m.mis_cur);
      stream.next(m.pwr_ok);
      stream.next(m.pwr_batt_rem);
      stream.next(m.pwr_batt_vcc);
      stream.next(m.pwr_batt_cur);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autopilot_bridge::Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autopilot_bridge::Status_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "armed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.armed);
    s << indent << "ahrs_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ahrs_ok);
    s << indent << "alt_rel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.alt_rel);
    s << indent << "as_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.as_ok);
    s << indent << "as_read: ";
    Printer<float>::stream(s, indent + "  ", v.as_read);
    s << indent << "fence_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fence_status);
    s << indent << "gps_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_ok);
    s << indent << "gps_sats: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_sats);
    s << indent << "gps_eph: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.gps_eph);
    s << indent << "ins_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ins_ok);
    s << indent << "mag_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mag_ok);
    s << indent << "mis_cur: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mis_cur);
    s << indent << "pwr_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pwr_ok);
    s << indent << "pwr_batt_rem: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pwr_batt_rem);
    s << indent << "pwr_batt_vcc: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pwr_batt_vcc);
    s << indent << "pwr_batt_cur: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pwr_batt_cur);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOPILOT_BRIDGE_MESSAGE_STATUS_H
