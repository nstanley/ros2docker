# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ia_msgs:msg/NewMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NewMsg(type):
    """Metaclass of message 'NewMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ia_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ia_msgs.msg.NewMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__new_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__new_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__new_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__new_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__new_msg

            from ia_msgs.msg import SomeInfo
            if SomeInfo.__class__._TYPE_SUPPORT is None:
                SomeInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NewMsg(metaclass=Metaclass_NewMsg):
    """Message class 'NewMsg'."""

    __slots__ = [
        '_s',
        '_f',
    ]

    _fields_and_field_types = {
        's': 'ia_msgs/SomeInfo',
        'f': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ia_msgs', 'msg'], 'SomeInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ia_msgs.msg import SomeInfo
        self.s = kwargs.get('s', SomeInfo())
        self.f = kwargs.get('f', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.s != other.s:
            return False
        if self.f != other.f:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def s(self):
        """Message field 's'."""
        return self._s

    @s.setter
    def s(self, value):
        if __debug__:
            from ia_msgs.msg import SomeInfo
            assert \
                isinstance(value, SomeInfo), \
                "The 's' field must be a sub message of type 'SomeInfo'"
        self._s = value

    @property
    def f(self):
        """Message field 'f'."""
        return self._f

    @f.setter
    def f(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f' field must be of type 'float'"
        self._f = value
