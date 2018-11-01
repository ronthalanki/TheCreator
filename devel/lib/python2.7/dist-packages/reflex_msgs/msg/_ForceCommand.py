# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from reflex_msgs/ForceCommand.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ForceCommand(genpy.Message):
  _md5sum = "ec8e01f7c46594906539a78e3918a7c2"
  _type = "reflex_msgs/ForceCommand"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Torque of various motors. UNITLESS due to the way Dynamixels measure torque
# More information on the force feedback here:
#	http://support.robotis.com/en/product/dynamixel/mx_series/mx-28.htm#Actuator_Address_28
float64 f1
float64 f2
float64 f3
float64 preshape
"""
  __slots__ = ['f1','f2','f3','preshape']
  _slot_types = ['float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       f1,f2,f3,preshape

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ForceCommand, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.f1 is None:
        self.f1 = 0.
      if self.f2 is None:
        self.f2 = 0.
      if self.f3 is None:
        self.f3 = 0.
      if self.preshape is None:
        self.preshape = 0.
    else:
      self.f1 = 0.
      self.f2 = 0.
      self.f3 = 0.
      self.preshape = 0.

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
      buff.write(_struct_4d.pack(_x.f1, _x.f2, _x.f3, _x.preshape))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.f1, _x.f2, _x.f3, _x.preshape,) = _struct_4d.unpack(str[start:end])
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
      buff.write(_struct_4d.pack(_x.f1, _x.f2, _x.f3, _x.preshape))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.f1, _x.f2, _x.f3, _x.preshape,) = _struct_4d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4d = struct.Struct("<4d")
