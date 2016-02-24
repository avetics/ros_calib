# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autopilot_bridge/Status.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class Status(genpy.Message):
  _md5sum = "3fa5b3d92700636ca78bc44bf0a7b17e"
  _type = "autopilot_bridge/Status"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """uint8 MODE_RALLY=0
uint8 MODE_MANUAL=1
uint8 MODE_FBWA=2
uint8 MODE_GUIDED=3
uint8 MODE_AUTO=4
uint8 MODE_FBWB=5
uint8 MODE_CIRCLE=6
uint8 MODE_LOITER=7
uint8 MODE_INITIALIZING=8
uint8 MODE_UNKNOWN=15

uint8 FENCE_NOT_BREACHED=0
uint8 FENCE_BREACHED=1
uint8 FENCE_DISABLED=2

Header  header
uint8   mode
bool    armed
bool    ahrs_ok
int32   alt_rel
bool    as_ok
float32 as_read
uint8   fence_status
bool    gps_ok
uint8   gps_sats
uint16  gps_eph
bool    ins_ok
bool    mag_ok
uint16  mis_cur
bool    pwr_ok
int16   pwr_batt_rem
int16   pwr_batt_vcc
int16   pwr_batt_cur


================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

"""
  # Pseudo-constants
  MODE_RALLY = 0
  MODE_MANUAL = 1
  MODE_FBWA = 2
  MODE_GUIDED = 3
  MODE_AUTO = 4
  MODE_FBWB = 5
  MODE_CIRCLE = 6
  MODE_LOITER = 7
  MODE_INITIALIZING = 8
  MODE_UNKNOWN = 15
  FENCE_NOT_BREACHED = 0
  FENCE_BREACHED = 1
  FENCE_DISABLED = 2

  __slots__ = ['header','mode','armed','ahrs_ok','alt_rel','as_ok','as_read','fence_status','gps_ok','gps_sats','gps_eph','ins_ok','mag_ok','mis_cur','pwr_ok','pwr_batt_rem','pwr_batt_vcc','pwr_batt_cur']
  _slot_types = ['std_msgs/Header','uint8','bool','bool','int32','bool','float32','uint8','bool','uint8','uint16','bool','bool','uint16','bool','int16','int16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,mode,armed,ahrs_ok,alt_rel,as_ok,as_read,fence_status,gps_ok,gps_sats,gps_eph,ins_ok,mag_ok,mis_cur,pwr_ok,pwr_batt_rem,pwr_batt_vcc,pwr_batt_cur

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Status, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.mode is None:
        self.mode = 0
      if self.armed is None:
        self.armed = False
      if self.ahrs_ok is None:
        self.ahrs_ok = False
      if self.alt_rel is None:
        self.alt_rel = 0
      if self.as_ok is None:
        self.as_ok = False
      if self.as_read is None:
        self.as_read = 0.
      if self.fence_status is None:
        self.fence_status = 0
      if self.gps_ok is None:
        self.gps_ok = False
      if self.gps_sats is None:
        self.gps_sats = 0
      if self.gps_eph is None:
        self.gps_eph = 0
      if self.ins_ok is None:
        self.ins_ok = False
      if self.mag_ok is None:
        self.mag_ok = False
      if self.mis_cur is None:
        self.mis_cur = 0
      if self.pwr_ok is None:
        self.pwr_ok = False
      if self.pwr_batt_rem is None:
        self.pwr_batt_rem = 0
      if self.pwr_batt_vcc is None:
        self.pwr_batt_vcc = 0
      if self.pwr_batt_cur is None:
        self.pwr_batt_cur = 0
    else:
      self.header = std_msgs.msg.Header()
      self.mode = 0
      self.armed = False
      self.ahrs_ok = False
      self.alt_rel = 0
      self.as_ok = False
      self.as_read = 0.
      self.fence_status = 0
      self.gps_ok = False
      self.gps_sats = 0
      self.gps_eph = 0
      self.ins_ok = False
      self.mag_ok = False
      self.mis_cur = 0
      self.pwr_ok = False
      self.pwr_batt_rem = 0
      self.pwr_batt_vcc = 0
      self.pwr_batt_cur = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3BiBf3BH2BHB3h.pack(_x.mode, _x.armed, _x.ahrs_ok, _x.alt_rel, _x.as_ok, _x.as_read, _x.fence_status, _x.gps_ok, _x.gps_sats, _x.gps_eph, _x.ins_ok, _x.mag_ok, _x.mis_cur, _x.pwr_ok, _x.pwr_batt_rem, _x.pwr_batt_vcc, _x.pwr_batt_cur))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 28
      (_x.mode, _x.armed, _x.ahrs_ok, _x.alt_rel, _x.as_ok, _x.as_read, _x.fence_status, _x.gps_ok, _x.gps_sats, _x.gps_eph, _x.ins_ok, _x.mag_ok, _x.mis_cur, _x.pwr_ok, _x.pwr_batt_rem, _x.pwr_batt_vcc, _x.pwr_batt_cur,) = _struct_3BiBf3BH2BHB3h.unpack(str[start:end])
      self.armed = bool(self.armed)
      self.ahrs_ok = bool(self.ahrs_ok)
      self.as_ok = bool(self.as_ok)
      self.gps_ok = bool(self.gps_ok)
      self.ins_ok = bool(self.ins_ok)
      self.mag_ok = bool(self.mag_ok)
      self.pwr_ok = bool(self.pwr_ok)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3BiBf3BH2BHB3h.pack(_x.mode, _x.armed, _x.ahrs_ok, _x.alt_rel, _x.as_ok, _x.as_read, _x.fence_status, _x.gps_ok, _x.gps_sats, _x.gps_eph, _x.ins_ok, _x.mag_ok, _x.mis_cur, _x.pwr_ok, _x.pwr_batt_rem, _x.pwr_batt_vcc, _x.pwr_batt_cur))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 28
      (_x.mode, _x.armed, _x.ahrs_ok, _x.alt_rel, _x.as_ok, _x.as_read, _x.fence_status, _x.gps_ok, _x.gps_sats, _x.gps_eph, _x.ins_ok, _x.mag_ok, _x.mis_cur, _x.pwr_ok, _x.pwr_batt_rem, _x.pwr_batt_vcc, _x.pwr_batt_cur,) = _struct_3BiBf3BH2BHB3h.unpack(str[start:end])
      self.armed = bool(self.armed)
      self.ahrs_ok = bool(self.ahrs_ok)
      self.as_ok = bool(self.as_ok)
      self.gps_ok = bool(self.gps_ok)
      self.ins_ok = bool(self.ins_ok)
      self.mag_ok = bool(self.mag_ok)
      self.pwr_ok = bool(self.pwr_ok)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3BiBf3BH2BHB3h = struct.Struct("<3BiBf3BH2BHB3h")
_struct_3I = struct.Struct("<3I")
