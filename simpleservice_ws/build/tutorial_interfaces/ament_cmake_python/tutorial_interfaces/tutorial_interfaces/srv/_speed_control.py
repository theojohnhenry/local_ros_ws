# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:srv/SpeedControl.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedControl_Request(type):
    """Metaclass of message 'SpeedControl_Request'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.SpeedControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speed_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speed_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speed_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speed_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speed_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeedControl_Request(metaclass=Metaclass_SpeedControl_Request):
    """Message class 'SpeedControl_Request'."""

    __slots__ = [
        '_speed_control',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'speed_control': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        self.speed_control = kwargs.get('speed_control', int())

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
        if self.speed_control != other.speed_control:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_control(self):
        """Message field 'speed_control'."""
        return self._speed_control

    @speed_control.setter
    def speed_control(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'speed_control' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'speed_control' field must be an integer in [-2147483648, 2147483647]"
        self._speed_control = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SpeedControl_Response(type):
    """Metaclass of message 'SpeedControl_Response'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.SpeedControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speed_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speed_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speed_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speed_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speed_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeedControl_Response(metaclass=Metaclass_SpeedControl_Response):
    """Message class 'SpeedControl_Response'."""

    __slots__ = [
        '_temperature',
        '_torque_current',
        '_speed',
        '_angle',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'temperature': 'uint8',
        'torque_current': 'int16',
        'speed': 'int16',
        'angle': 'int16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
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
        self.temperature = kwargs.get('temperature', int())
        self.torque_current = kwargs.get('torque_current', int())
        self.speed = kwargs.get('speed', int())
        self.angle = kwargs.get('angle', int())

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
        if self.temperature != other.temperature:
            return False
        if self.torque_current != other.torque_current:
            return False
        if self.speed != other.speed:
            return False
        if self.angle != other.angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temperature' field must be an unsigned integer in [0, 255]"
        self._temperature = value

    @builtins.property
    def torque_current(self):
        """Message field 'torque_current'."""
        return self._torque_current

    @torque_current.setter
    def torque_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'torque_current' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'torque_current' field must be an integer in [-32768, 32767]"
        self._torque_current = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'speed' field must be an integer in [-32768, 32767]"
        self._speed = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'angle' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'angle' field must be an integer in [-32768, 32767]"
        self._angle = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SpeedControl_Event(type):
    """Metaclass of message 'SpeedControl_Event'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.SpeedControl_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speed_control__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speed_control__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speed_control__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speed_control__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speed_control__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeedControl_Event(metaclass=Metaclass_SpeedControl_Event):
    """Message class 'SpeedControl_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<tutorial_interfaces/SpeedControl_Request, 1>',
        'response': 'sequence<tutorial_interfaces/SpeedControl_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['tutorial_interfaces', 'srv'], 'SpeedControl_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['tutorial_interfaces', 'srv'], 'SpeedControl_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from tutorial_interfaces.srv import SpeedControl_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, SpeedControl_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SpeedControl_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from tutorial_interfaces.srv import SpeedControl_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, SpeedControl_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SpeedControl_Response'"
        self._response = value


class Metaclass_SpeedControl(type):
    """Metaclass of service 'SpeedControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.SpeedControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__speed_control

            from tutorial_interfaces.srv import _speed_control
            if _speed_control.Metaclass_SpeedControl_Request._TYPE_SUPPORT is None:
                _speed_control.Metaclass_SpeedControl_Request.__import_type_support__()
            if _speed_control.Metaclass_SpeedControl_Response._TYPE_SUPPORT is None:
                _speed_control.Metaclass_SpeedControl_Response.__import_type_support__()
            if _speed_control.Metaclass_SpeedControl_Event._TYPE_SUPPORT is None:
                _speed_control.Metaclass_SpeedControl_Event.__import_type_support__()


class SpeedControl(metaclass=Metaclass_SpeedControl):
    from tutorial_interfaces.srv._speed_control import SpeedControl_Request as Request
    from tutorial_interfaces.srv._speed_control import SpeedControl_Response as Response
    from tutorial_interfaces.srv._speed_control import SpeedControl_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
