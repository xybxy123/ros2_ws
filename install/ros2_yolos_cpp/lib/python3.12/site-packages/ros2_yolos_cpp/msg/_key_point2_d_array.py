# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_yolos_cpp:msg/KeyPoint2DArray.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KeyPoint2DArray(type):
    """Metaclass of message 'KeyPoint2DArray'."""

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
            module = import_type_support('ros2_yolos_cpp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_yolos_cpp.msg.KeyPoint2DArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__key_point2_d_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__key_point2_d_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__key_point2_d_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__key_point2_d_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__key_point2_d_array

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from ros2_yolos_cpp.msg import KeyPoint2D
            if KeyPoint2D.__class__._TYPE_SUPPORT is None:
                KeyPoint2D.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KeyPoint2DArray(metaclass=Metaclass_KeyPoint2DArray):
    """Message class 'KeyPoint2DArray'."""

    __slots__ = [
        '_header',
        '_keypoints',
        '_bounding_box_center',
        '_bounding_box_size_x',
        '_bounding_box_size_y',
        '_confidence',
        '_class_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'keypoints': 'sequence<ros2_yolos_cpp/KeyPoint2D>',
        'bounding_box_center': 'geometry_msgs/Point',
        'bounding_box_size_x': 'double',
        'bounding_box_size_y': 'double',
        'confidence': 'double',
        'class_id': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_yolos_cpp', 'msg'], 'KeyPoint2D')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.keypoints = kwargs.get('keypoints', [])
        from geometry_msgs.msg import Point
        self.bounding_box_center = kwargs.get('bounding_box_center', Point())
        self.bounding_box_size_x = kwargs.get('bounding_box_size_x', float())
        self.bounding_box_size_y = kwargs.get('bounding_box_size_y', float())
        self.confidence = kwargs.get('confidence', float())
        self.class_id = kwargs.get('class_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.keypoints != other.keypoints:
            return False
        if self.bounding_box_center != other.bounding_box_center:
            return False
        if self.bounding_box_size_x != other.bounding_box_size_x:
            return False
        if self.bounding_box_size_y != other.bounding_box_size_y:
            return False
        if self.confidence != other.confidence:
            return False
        if self.class_id != other.class_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def keypoints(self):
        """Message field 'keypoints'."""
        return self._keypoints

    @keypoints.setter
    def keypoints(self, value):
        if self._check_fields:
            from ros2_yolos_cpp.msg import KeyPoint2D
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, KeyPoint2D) for v in value) and
                 True), \
                "The 'keypoints' field must be a set or sequence and each value of type 'KeyPoint2D'"
        self._keypoints = value

    @builtins.property
    def bounding_box_center(self):
        """Message field 'bounding_box_center'."""
        return self._bounding_box_center

    @bounding_box_center.setter
    def bounding_box_center(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'bounding_box_center' field must be a sub message of type 'Point'"
        self._bounding_box_center = value

    @builtins.property
    def bounding_box_size_x(self):
        """Message field 'bounding_box_size_x'."""
        return self._bounding_box_size_x

    @bounding_box_size_x.setter
    def bounding_box_size_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bounding_box_size_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bounding_box_size_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bounding_box_size_x = value

    @builtins.property
    def bounding_box_size_y(self):
        """Message field 'bounding_box_size_y'."""
        return self._bounding_box_size_y

    @bounding_box_size_y.setter
    def bounding_box_size_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bounding_box_size_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bounding_box_size_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bounding_box_size_y = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def class_id(self):
        """Message field 'class_id'."""
        return self._class_id

    @class_id.setter
    def class_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'class_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'class_id' field must be an integer in [-2147483648, 2147483647]"
        self._class_id = value
