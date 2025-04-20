// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces:srv/SpeedControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tutorial_interfaces/srv/detail/speed_control__functions.h"
#include "tutorial_interfaces/srv/detail/speed_control__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SpeedControl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpeedControl_Request_type_support_ids_t;

static const _SpeedControl_Request_type_support_ids_t _SpeedControl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SpeedControl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpeedControl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpeedControl_Request_type_support_symbol_names_t _SpeedControl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, SpeedControl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tutorial_interfaces, srv, SpeedControl_Request)),
  }
};

typedef struct _SpeedControl_Request_type_support_data_t
{
  void * data[2];
} _SpeedControl_Request_type_support_data_t;

static _SpeedControl_Request_type_support_data_t _SpeedControl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpeedControl_Request_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_SpeedControl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SpeedControl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SpeedControl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpeedControl_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpeedControl_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__SpeedControl_Request__get_type_hash,
  &tutorial_interfaces__srv__SpeedControl_Request__get_type_description,
  &tutorial_interfaces__srv__SpeedControl_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Request>()
{
  return &::tutorial_interfaces::srv::rosidl_typesupport_cpp::SpeedControl_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tutorial_interfaces, srv, SpeedControl_Request)() {
  return get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/speed_control__functions.h"
// already included above
// #include "tutorial_interfaces/srv/detail/speed_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SpeedControl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpeedControl_Response_type_support_ids_t;

static const _SpeedControl_Response_type_support_ids_t _SpeedControl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SpeedControl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpeedControl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpeedControl_Response_type_support_symbol_names_t _SpeedControl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, SpeedControl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tutorial_interfaces, srv, SpeedControl_Response)),
  }
};

typedef struct _SpeedControl_Response_type_support_data_t
{
  void * data[2];
} _SpeedControl_Response_type_support_data_t;

static _SpeedControl_Response_type_support_data_t _SpeedControl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpeedControl_Response_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_SpeedControl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SpeedControl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SpeedControl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpeedControl_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpeedControl_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__SpeedControl_Response__get_type_hash,
  &tutorial_interfaces__srv__SpeedControl_Response__get_type_description,
  &tutorial_interfaces__srv__SpeedControl_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Response>()
{
  return &::tutorial_interfaces::srv::rosidl_typesupport_cpp::SpeedControl_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tutorial_interfaces, srv, SpeedControl_Response)() {
  return get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/speed_control__functions.h"
// already included above
// #include "tutorial_interfaces/srv/detail/speed_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SpeedControl_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpeedControl_Event_type_support_ids_t;

static const _SpeedControl_Event_type_support_ids_t _SpeedControl_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SpeedControl_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpeedControl_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpeedControl_Event_type_support_symbol_names_t _SpeedControl_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, SpeedControl_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tutorial_interfaces, srv, SpeedControl_Event)),
  }
};

typedef struct _SpeedControl_Event_type_support_data_t
{
  void * data[2];
} _SpeedControl_Event_type_support_data_t;

static _SpeedControl_Event_type_support_data_t _SpeedControl_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpeedControl_Event_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_SpeedControl_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SpeedControl_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SpeedControl_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpeedControl_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpeedControl_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__SpeedControl_Event__get_type_hash,
  &tutorial_interfaces__srv__SpeedControl_Event__get_type_description,
  &tutorial_interfaces__srv__SpeedControl_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Event>()
{
  return &::tutorial_interfaces::srv::rosidl_typesupport_cpp::SpeedControl_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tutorial_interfaces, srv, SpeedControl_Event)() {
  return get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "tutorial_interfaces/srv/detail/speed_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SpeedControl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpeedControl_type_support_ids_t;

static const _SpeedControl_type_support_ids_t _SpeedControl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SpeedControl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpeedControl_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpeedControl_type_support_symbol_names_t _SpeedControl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, SpeedControl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tutorial_interfaces, srv, SpeedControl)),
  }
};

typedef struct _SpeedControl_type_support_data_t
{
  void * data[2];
} _SpeedControl_type_support_data_t;

static _SpeedControl_type_support_data_t _SpeedControl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpeedControl_service_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_SpeedControl_service_typesupport_ids.typesupport_identifier[0],
  &_SpeedControl_service_typesupport_symbol_names.symbol_name[0],
  &_SpeedControl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SpeedControl_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpeedControl_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<tutorial_interfaces::srv::SpeedControl_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<tutorial_interfaces::srv::SpeedControl>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<tutorial_interfaces::srv::SpeedControl>,
  &tutorial_interfaces__srv__SpeedControl__get_type_hash,
  &tutorial_interfaces__srv__SpeedControl__get_type_description,
  &tutorial_interfaces__srv__SpeedControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tutorial_interfaces::srv::SpeedControl>()
{
  return &::tutorial_interfaces::srv::rosidl_typesupport_cpp::SpeedControl_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, tutorial_interfaces, srv, SpeedControl)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<tutorial_interfaces::srv::SpeedControl>();
}

#ifdef __cplusplus
}
#endif
