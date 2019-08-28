# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2sharedlib:msg/CompiledStruct.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CompiledStruct(type):
    """Metaclass of message 'CompiledStruct'."""

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
            module = import_type_support('ros2sharedlib')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2sharedlib.msg.CompiledStruct')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__compiled_struct
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__compiled_struct
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__compiled_struct
            cls._TYPE_SUPPORT = module.type_support_msg__msg__compiled_struct
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__compiled_struct

            from ros2sharedlib.msg import AnotherStruct
            if AnotherStruct.__class__._TYPE_SUPPORT is None:
                AnotherStruct.__class__.__import_type_support__()

            from ros2sharedlib.msg import SimpleStruct
            if SimpleStruct.__class__._TYPE_SUPPORT is None:
                SimpleStruct.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CompiledStruct(metaclass=Metaclass_CompiledStruct):
    """Message class 'CompiledStruct'."""

    __slots__ = [
        '_ss',
        '_as',
    ]

    _fields_and_field_types = {
        'ss': 'ros2sharedlib/SimpleStruct',
        'as': 'ros2sharedlib/AnotherStruct',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros2sharedlib', 'msg'], 'SimpleStruct'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2sharedlib', 'msg'], 'AnotherStruct'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ros2sharedlib.msg import SimpleStruct
        self.ss = kwargs.get('ss', SimpleStruct())
        from ros2sharedlib.msg import AnotherStruct
        self.as = kwargs.get('as', AnotherStruct())

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
        if self.ss != other.ss:
            return False
        if self.as != other.as:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ss(self):
        """Message field 'ss'."""
        return self._ss

    @ss.setter
    def ss(self, value):
        if __debug__:
            from ros2sharedlib.msg import SimpleStruct
            assert \
                isinstance(value, SimpleStruct), \
                "The 'ss' field must be a sub message of type 'SimpleStruct'"
        self._ss = value

    @property
    def as(self):
        """Message field 'as'."""
        return self._as

    @as.setter
    def as(self, value):
        if __debug__:
            from ros2sharedlib.msg import AnotherStruct
            assert \
                isinstance(value, AnotherStruct), \
                "The 'as' field must be a sub message of type 'AnotherStruct'"
        self._as = value
