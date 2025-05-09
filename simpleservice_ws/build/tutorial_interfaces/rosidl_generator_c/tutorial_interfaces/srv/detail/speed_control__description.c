// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tutorial_interfaces:srv/SpeedControl.idl
// generated code does not contain a copyright notice

#include "tutorial_interfaces/srv/detail/speed_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__srv__SpeedControl__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0x42, 0x47, 0x98, 0xcb, 0x70, 0xa2, 0xe8,
      0xfa, 0x0a, 0x96, 0xc3, 0x3e, 0x4d, 0x1a, 0x39,
      0x5a, 0xbc, 0xa3, 0x22, 0x86, 0x37, 0x44, 0x90,
      0xc4, 0x29, 0x5e, 0x42, 0x9e, 0x61, 0xa3, 0xeb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__srv__SpeedControl_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x3f, 0xac, 0xc5, 0x93, 0x33, 0x38, 0x50,
      0x25, 0xa4, 0x30, 0x24, 0xbf, 0x00, 0xe3, 0xc8,
      0xa6, 0xe1, 0xdc, 0x6d, 0x9f, 0x60, 0xb3, 0xdb,
      0x3c, 0x7b, 0x4a, 0x5c, 0x08, 0x64, 0xec, 0x16,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__srv__SpeedControl_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd4, 0x7a, 0x46, 0x70, 0xac, 0xdf, 0x18, 0xbf,
      0x1e, 0x52, 0x48, 0x66, 0x3e, 0xe7, 0xc7, 0xd4,
      0x79, 0x81, 0xf1, 0x5b, 0xbe, 0xfa, 0xdf, 0x5c,
      0xf9, 0xf3, 0x32, 0xad, 0x2c, 0xf2, 0x95, 0xb1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__srv__SpeedControl_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xe4, 0xe6, 0xd9, 0x0c, 0x85, 0xde, 0x5a,
      0x5d, 0xe8, 0xd5, 0xe3, 0x8b, 0xf0, 0x42, 0x69,
      0xca, 0x21, 0x2c, 0xe5, 0x85, 0xc8, 0x29, 0x64,
      0xf9, 0x69, 0x3f, 0x87, 0xa8, 0xa3, 0x77, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char tutorial_interfaces__srv__SpeedControl__TYPE_NAME[] = "tutorial_interfaces/srv/SpeedControl";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char tutorial_interfaces__srv__SpeedControl_Event__TYPE_NAME[] = "tutorial_interfaces/srv/SpeedControl_Event";
static char tutorial_interfaces__srv__SpeedControl_Request__TYPE_NAME[] = "tutorial_interfaces/srv/SpeedControl_Request";
static char tutorial_interfaces__srv__SpeedControl_Response__TYPE_NAME[] = "tutorial_interfaces/srv/SpeedControl_Response";

// Define type names, field names, and default values
static char tutorial_interfaces__srv__SpeedControl__FIELD_NAME__request_message[] = "request_message";
static char tutorial_interfaces__srv__SpeedControl__FIELD_NAME__response_message[] = "response_message";
static char tutorial_interfaces__srv__SpeedControl__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field tutorial_interfaces__srv__SpeedControl__FIELDS[] = {
  {
    {tutorial_interfaces__srv__SpeedControl__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tutorial_interfaces__srv__SpeedControl_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tutorial_interfaces__srv__SpeedControl_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tutorial_interfaces__srv__SpeedControl_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tutorial_interfaces__srv__SpeedControl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__srv__SpeedControl__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tutorial_interfaces__srv__SpeedControl__TYPE_NAME, 36, 36},
      {tutorial_interfaces__srv__SpeedControl__FIELDS, 3, 3},
    },
    {tutorial_interfaces__srv__SpeedControl__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tutorial_interfaces__srv__SpeedControl_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tutorial_interfaces__srv__SpeedControl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = tutorial_interfaces__srv__SpeedControl_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tutorial_interfaces__srv__SpeedControl_Request__FIELD_NAME__speed_control[] = "speed_control";

static rosidl_runtime_c__type_description__Field tutorial_interfaces__srv__SpeedControl_Request__FIELDS[] = {
  {
    {tutorial_interfaces__srv__SpeedControl_Request__FIELD_NAME__speed_control, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__srv__SpeedControl_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tutorial_interfaces__srv__SpeedControl_Request__TYPE_NAME, 44, 44},
      {tutorial_interfaces__srv__SpeedControl_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tutorial_interfaces__srv__SpeedControl_Response__FIELD_NAME__temperature[] = "temperature";
static char tutorial_interfaces__srv__SpeedControl_Response__FIELD_NAME__torque_current[] = "torque_current";
static char tutorial_interfaces__srv__SpeedControl_Response__FIELD_NAME__speed[] = "speed";
static char tutorial_interfaces__srv__SpeedControl_Response__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field tutorial_interfaces__srv__SpeedControl_Response__FIELDS[] = {
  {
    {tutorial_interfaces__srv__SpeedControl_Response__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Response__FIELD_NAME__torque_current, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Response__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Response__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__srv__SpeedControl_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tutorial_interfaces__srv__SpeedControl_Response__TYPE_NAME, 45, 45},
      {tutorial_interfaces__srv__SpeedControl_Response__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tutorial_interfaces__srv__SpeedControl_Event__FIELD_NAME__info[] = "info";
static char tutorial_interfaces__srv__SpeedControl_Event__FIELD_NAME__request[] = "request";
static char tutorial_interfaces__srv__SpeedControl_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field tutorial_interfaces__srv__SpeedControl_Event__FIELDS[] = {
  {
    {tutorial_interfaces__srv__SpeedControl_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tutorial_interfaces__srv__SpeedControl_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tutorial_interfaces__srv__SpeedControl_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tutorial_interfaces__srv__SpeedControl_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {tutorial_interfaces__srv__SpeedControl_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__srv__SpeedControl_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tutorial_interfaces__srv__SpeedControl_Event__TYPE_NAME, 42, 42},
      {tutorial_interfaces__srv__SpeedControl_Event__FIELDS, 3, 3},
    },
    {tutorial_interfaces__srv__SpeedControl_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tutorial_interfaces__srv__SpeedControl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tutorial_interfaces__srv__SpeedControl_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 speed_control  # Desired speed, 0.01 dps/LSB\n"
  "---\n"
  "float64 temperature         # Motor temperature;\n"
  "float64 torque_current      # Torque current (signed);\n"
  "float64 speed               # Motor output shaft speed (signed, 0.01 dps/LSB);\n"
  "float64 angle               # Motor output shaft angle (signed, 0.01 deg/LSB);";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__srv__SpeedControl__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tutorial_interfaces__srv__SpeedControl__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 316, 316},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__srv__SpeedControl_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tutorial_interfaces__srv__SpeedControl_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__srv__SpeedControl_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tutorial_interfaces__srv__SpeedControl_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__srv__SpeedControl_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tutorial_interfaces__srv__SpeedControl_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__srv__SpeedControl__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tutorial_interfaces__srv__SpeedControl__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tutorial_interfaces__srv__SpeedControl_Event__get_individual_type_description_source(NULL);
    sources[4] = *tutorial_interfaces__srv__SpeedControl_Request__get_individual_type_description_source(NULL);
    sources[5] = *tutorial_interfaces__srv__SpeedControl_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__srv__SpeedControl_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tutorial_interfaces__srv__SpeedControl_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__srv__SpeedControl_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tutorial_interfaces__srv__SpeedControl_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__srv__SpeedControl_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tutorial_interfaces__srv__SpeedControl_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tutorial_interfaces__srv__SpeedControl_Request__get_individual_type_description_source(NULL);
    sources[4] = *tutorial_interfaces__srv__SpeedControl_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
