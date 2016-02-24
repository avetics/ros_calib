# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autopilot_bridge/WPGetAllRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class WPGetAllRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "autopilot_bridge/WPGetAllRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WPGetAllRequest, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autopilot_bridge/WPGetAllResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import autopilot_bridge.msg

class WPGetAllResponse(genpy.Message):
  _md5sum = "61fd937ff9a773d87567a2f8da6a06ff"
  _type = "autopilot_bridge/WPGetAllResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool ok
Waypoint[] points


================================================================================
MSG: autopilot_bridge/Waypoint
uint16 seq
uint8 frame
uint16 command
bool current
bool autocontinue
float64 param1
float64 param2
float64 param3
float64 param4
float64 x
float64 y
float64 z

"""
  __slots__ = ['ok','points']
  _slot_types = ['bool','autopilot_bridge/Waypoint[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ok,points

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WPGetAllResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.ok is None:
        self.ok = False
      if self.points is None:
        self.points = []
    else:
      self.ok = False
      self.points = []

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
      buff.write(_struct_B.pack(self.ok))
      length = len(self.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.points:
        _x = val1
        buff.write(_struct_HBH2B7d.pack(_x.seq, _x.frame, _x.command, _x.current, _x.autocontinue, _x.param1, _x.param2, _x.param3, _x.param4, _x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.points is None:
        self.points = None
      end = 0
      start = end
      end += 1
      (self.ok,) = _struct_B.unpack(str[start:end])
      self.ok = bool(self.ok)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.points = []
      for i in range(0, length):
        val1 = autopilot_bridge.msg.Waypoint()
        _x = val1
        start = end
        end += 63
        (_x.seq, _x.frame, _x.command, _x.current, _x.autocontinue, _x.param1, _x.param2, _x.param3, _x.param4, _x.x, _x.y, _x.z,) = _struct_HBH2B7d.unpack(str[start:end])
        val1.current = bool(val1.current)
        val1.autocontinue = bool(val1.autocontinue)
        self.points.append(val1)
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
      buff.write(_struct_B.pack(self.ok))
      length = len(self.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.points:
        _x = val1
        buff.write(_struct_HBH2B7d.pack(_x.seq, _x.frame, _x.command, _x.current, _x.autocontinue, _x.param1, _x.param2, _x.param3, _x.param4, _x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.points is None:
        self.points = None
      end = 0
      start = end
      end += 1
      (self.ok,) = _struct_B.unpack(str[start:end])
      self.ok = bool(self.ok)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.points = []
      for i in range(0, length):
        val1 = autopilot_bridge.msg.Waypoint()
        _x = val1
        start = end
        end += 63
        (_x.seq, _x.frame, _x.command, _x.current, _x.autocontinue, _x.param1, _x.param2, _x.param3, _x.param4, _x.x, _x.y, _x.z,) = _struct_HBH2B7d.unpack(str[start:end])
        val1.current = bool(val1.current)
        val1.autocontinue = bool(val1.autocontinue)
        self.points.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_HBH2B7d = struct.Struct("<HBH2B7d")
_struct_B = struct.Struct("<B")
class WPGetAll(object):
  _type          = 'autopilot_bridge/WPGetAll'
  _md5sum = '61fd937ff9a773d87567a2f8da6a06ff'
  _request_class  = WPGetAllRequest
  _response_class = WPGetAllResponse
