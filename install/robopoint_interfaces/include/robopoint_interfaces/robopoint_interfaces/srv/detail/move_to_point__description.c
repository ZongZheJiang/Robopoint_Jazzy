// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robopoint_interfaces:srv/MoveToPoint.idl
// generated code does not contain a copyright notice

#include "robopoint_interfaces/srv/detail/move_to_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robopoint_interfaces
const rosidl_type_hash_t *
robopoint_interfaces__srv__MoveToPoint__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0x95, 0x78, 0xf2, 0xb8, 0x8f, 0x68, 0x74,
      0x90, 0x54, 0xce, 0xa1, 0xca, 0x0e, 0x39, 0xc4,
      0x8b, 0x58, 0xf2, 0xc7, 0x2d, 0xc2, 0xd0, 0xd9,
      0x7d, 0xa2, 0x76, 0x60, 0x26, 0x1f, 0x61, 0x6b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robopoint_interfaces
const rosidl_type_hash_t *
robopoint_interfaces__srv__MoveToPoint_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x50, 0x9d, 0x44, 0xb5, 0xa1, 0x41, 0xc6,
      0x2f, 0x82, 0xeb, 0x2d, 0xcb, 0x27, 0x68, 0x9b,
      0x8c, 0xd0, 0x51, 0xd0, 0x26, 0xb8, 0x65, 0x10,
      0x10, 0x69, 0x3a, 0x1b, 0xbb, 0x77, 0x25, 0x5d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robopoint_interfaces
const rosidl_type_hash_t *
robopoint_interfaces__srv__MoveToPoint_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xdf, 0x4e, 0x6c, 0xce, 0xcf, 0xf0, 0x90,
      0x19, 0xe7, 0x91, 0xb0, 0x5d, 0x8a, 0xce, 0x02,
      0x48, 0x41, 0xb0, 0x0f, 0x80, 0x5f, 0x31, 0x26,
      0x0e, 0xd6, 0xab, 0x0f, 0x86, 0x9d, 0x59, 0xb3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robopoint_interfaces
const rosidl_type_hash_t *
robopoint_interfaces__srv__MoveToPoint_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0xae, 0x0e, 0x2e, 0xe2, 0x4d, 0xd0, 0xfb,
      0x42, 0x4c, 0xbe, 0x9b, 0x2e, 0x71, 0x52, 0x16,
      0xd9, 0xf2, 0xad, 0xa9, 0x41, 0x8b, 0xdc, 0x81,
      0x44, 0x2f, 0xf3, 0x87, 0x02, 0xe9, 0x3a, 0xb1,
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

static char robopoint_interfaces__srv__MoveToPoint__TYPE_NAME[] = "robopoint_interfaces/srv/MoveToPoint";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robopoint_interfaces__srv__MoveToPoint_Event__TYPE_NAME[] = "robopoint_interfaces/srv/MoveToPoint_Event";
static char robopoint_interfaces__srv__MoveToPoint_Request__TYPE_NAME[] = "robopoint_interfaces/srv/MoveToPoint_Request";
static char robopoint_interfaces__srv__MoveToPoint_Response__TYPE_NAME[] = "robopoint_interfaces/srv/MoveToPoint_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char robopoint_interfaces__srv__MoveToPoint__FIELD_NAME__request_message[] = "request_message";
static char robopoint_interfaces__srv__MoveToPoint__FIELD_NAME__response_message[] = "response_message";
static char robopoint_interfaces__srv__MoveToPoint__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field robopoint_interfaces__srv__MoveToPoint__FIELDS[] = {
  {
    {robopoint_interfaces__srv__MoveToPoint__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robopoint_interfaces__srv__MoveToPoint_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robopoint_interfaces__srv__MoveToPoint_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robopoint_interfaces__srv__MoveToPoint_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robopoint_interfaces__srv__MoveToPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robopoint_interfaces__srv__MoveToPoint__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robopoint_interfaces__srv__MoveToPoint__TYPE_NAME, 36, 36},
      {robopoint_interfaces__srv__MoveToPoint__FIELDS, 3, 3},
    },
    {robopoint_interfaces__srv__MoveToPoint__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robopoint_interfaces__srv__MoveToPoint_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robopoint_interfaces__srv__MoveToPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robopoint_interfaces__srv__MoveToPoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robopoint_interfaces__srv__MoveToPoint_Request__FIELD_NAME__x[] = "x";
static char robopoint_interfaces__srv__MoveToPoint_Request__FIELD_NAME__y[] = "y";
static char robopoint_interfaces__srv__MoveToPoint_Request__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field robopoint_interfaces__srv__MoveToPoint_Request__FIELDS[] = {
  {
    {robopoint_interfaces__srv__MoveToPoint_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Request__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robopoint_interfaces__srv__MoveToPoint_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robopoint_interfaces__srv__MoveToPoint_Request__TYPE_NAME, 44, 44},
      {robopoint_interfaces__srv__MoveToPoint_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robopoint_interfaces__srv__MoveToPoint_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field robopoint_interfaces__srv__MoveToPoint_Response__FIELDS[] = {
  {
    {robopoint_interfaces__srv__MoveToPoint_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robopoint_interfaces__srv__MoveToPoint_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robopoint_interfaces__srv__MoveToPoint_Response__TYPE_NAME, 45, 45},
      {robopoint_interfaces__srv__MoveToPoint_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robopoint_interfaces__srv__MoveToPoint_Event__FIELD_NAME__info[] = "info";
static char robopoint_interfaces__srv__MoveToPoint_Event__FIELD_NAME__request[] = "request";
static char robopoint_interfaces__srv__MoveToPoint_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robopoint_interfaces__srv__MoveToPoint_Event__FIELDS[] = {
  {
    {robopoint_interfaces__srv__MoveToPoint_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robopoint_interfaces__srv__MoveToPoint_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robopoint_interfaces__srv__MoveToPoint_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robopoint_interfaces__srv__MoveToPoint_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {robopoint_interfaces__srv__MoveToPoint_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robopoint_interfaces__srv__MoveToPoint_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robopoint_interfaces__srv__MoveToPoint_Event__TYPE_NAME, 42, 42},
      {robopoint_interfaces__srv__MoveToPoint_Event__FIELDS, 3, 3},
    },
    {robopoint_interfaces__srv__MoveToPoint_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robopoint_interfaces__srv__MoveToPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robopoint_interfaces__srv__MoveToPoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 z\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robopoint_interfaces__srv__MoveToPoint__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robopoint_interfaces__srv__MoveToPoint__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robopoint_interfaces__srv__MoveToPoint_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robopoint_interfaces__srv__MoveToPoint_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robopoint_interfaces__srv__MoveToPoint_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robopoint_interfaces__srv__MoveToPoint_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robopoint_interfaces__srv__MoveToPoint_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robopoint_interfaces__srv__MoveToPoint_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robopoint_interfaces__srv__MoveToPoint__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robopoint_interfaces__srv__MoveToPoint__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robopoint_interfaces__srv__MoveToPoint_Event__get_individual_type_description_source(NULL);
    sources[3] = *robopoint_interfaces__srv__MoveToPoint_Request__get_individual_type_description_source(NULL);
    sources[4] = *robopoint_interfaces__srv__MoveToPoint_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robopoint_interfaces__srv__MoveToPoint_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robopoint_interfaces__srv__MoveToPoint_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robopoint_interfaces__srv__MoveToPoint_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robopoint_interfaces__srv__MoveToPoint_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robopoint_interfaces__srv__MoveToPoint_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robopoint_interfaces__srv__MoveToPoint_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robopoint_interfaces__srv__MoveToPoint_Request__get_individual_type_description_source(NULL);
    sources[3] = *robopoint_interfaces__srv__MoveToPoint_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
