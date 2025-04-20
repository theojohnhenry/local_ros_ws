// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/SpeedControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_interfaces/srv/speed_control.h"


#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SPEED_CONTROL__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SPEED_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SpeedControl in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SpeedControl_Request
{
  /// Desired speed, 0.01 dps/LSB
  int32_t speed_control;
} tutorial_interfaces__srv__SpeedControl_Request;

// Struct for a sequence of tutorial_interfaces__srv__SpeedControl_Request.
typedef struct tutorial_interfaces__srv__SpeedControl_Request__Sequence
{
  tutorial_interfaces__srv__SpeedControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SpeedControl_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SpeedControl in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SpeedControl_Response
{
  /// Motor temperature
  uint8_t temperature;
  /// Torque current (signed)
  int16_t torque_current;
  /// Motor output shaft speed (signed, 0.01 dps/LSB)
  int16_t speed;
  /// Motor output shaft angle (signed, 0.01 deg/LSB)
  int16_t angle;
} tutorial_interfaces__srv__SpeedControl_Response;

// Struct for a sequence of tutorial_interfaces__srv__SpeedControl_Response.
typedef struct tutorial_interfaces__srv__SpeedControl_Response__Sequence
{
  tutorial_interfaces__srv__SpeedControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SpeedControl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tutorial_interfaces__srv__SpeedControl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tutorial_interfaces__srv__SpeedControl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SpeedControl in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SpeedControl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tutorial_interfaces__srv__SpeedControl_Request__Sequence request;
  tutorial_interfaces__srv__SpeedControl_Response__Sequence response;
} tutorial_interfaces__srv__SpeedControl_Event;

// Struct for a sequence of tutorial_interfaces__srv__SpeedControl_Event.
typedef struct tutorial_interfaces__srv__SpeedControl_Event__Sequence
{
  tutorial_interfaces__srv__SpeedControl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SpeedControl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SPEED_CONTROL__STRUCT_H_
