// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__struct.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__type_support.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MotorGains_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorGains_Request_type_support_ids_t;

static const _MotorGains_Request_type_support_ids_t _MotorGains_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorGains_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorGains_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorGains_Request_type_support_symbol_names_t _MotorGains_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, MotorGains_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Request)),
  }
};

typedef struct _MotorGains_Request_type_support_data_t
{
  void * data[2];
} _MotorGains_Request_type_support_data_t;

static _MotorGains_Request_type_support_data_t _MotorGains_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorGains_Request_message_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_MotorGains_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MotorGains_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MotorGains_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorGains_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorGains_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__MotorGains_Request__get_type_hash,
  &interbotix_xs_msgs__srv__MotorGains_Request__get_type_description,
  &interbotix_xs_msgs__srv__MotorGains_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_xs_msgs, srv, MotorGains_Request)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_c::MotorGains_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__type_support.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MotorGains_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorGains_Response_type_support_ids_t;

static const _MotorGains_Response_type_support_ids_t _MotorGains_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorGains_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorGains_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorGains_Response_type_support_symbol_names_t _MotorGains_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, MotorGains_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Response)),
  }
};

typedef struct _MotorGains_Response_type_support_data_t
{
  void * data[2];
} _MotorGains_Response_type_support_data_t;

static _MotorGains_Response_type_support_data_t _MotorGains_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorGains_Response_message_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_MotorGains_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MotorGains_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MotorGains_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorGains_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorGains_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__MotorGains_Response__get_type_hash,
  &interbotix_xs_msgs__srv__MotorGains_Response__get_type_description,
  &interbotix_xs_msgs__srv__MotorGains_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_xs_msgs, srv, MotorGains_Response)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_c::MotorGains_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__type_support.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MotorGains_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorGains_Event_type_support_ids_t;

static const _MotorGains_Event_type_support_ids_t _MotorGains_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorGains_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorGains_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorGains_Event_type_support_symbol_names_t _MotorGains_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, MotorGains_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Event)),
  }
};

typedef struct _MotorGains_Event_type_support_data_t
{
  void * data[2];
} _MotorGains_Event_type_support_data_t;

static _MotorGains_Event_type_support_data_t _MotorGains_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorGains_Event_message_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_MotorGains_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MotorGains_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MotorGains_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorGains_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorGains_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__MotorGains_Event__get_type_hash,
  &interbotix_xs_msgs__srv__MotorGains_Event__get_type_description,
  &interbotix_xs_msgs__srv__MotorGains_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_xs_msgs, srv, MotorGains_Event)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_c::MotorGains_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _MotorGains_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorGains_type_support_ids_t;

static const _MotorGains_type_support_ids_t _MotorGains_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorGains_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorGains_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorGains_type_support_symbol_names_t _MotorGains_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, MotorGains)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains)),
  }
};

typedef struct _MotorGains_type_support_data_t
{
  void * data[2];
} _MotorGains_type_support_data_t;

static _MotorGains_type_support_data_t _MotorGains_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorGains_service_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_MotorGains_service_typesupport_ids.typesupport_identifier[0],
  &_MotorGains_service_typesupport_symbol_names.symbol_name[0],
  &_MotorGains_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MotorGains_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorGains_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MotorGains_Request_message_type_support_handle,
  &MotorGains_Response_message_type_support_handle,
  &MotorGains_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interbotix_xs_msgs,
    srv,
    MotorGains
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interbotix_xs_msgs,
    srv,
    MotorGains
  ),
  &interbotix_xs_msgs__srv__MotorGains__get_type_hash,
  &interbotix_xs_msgs__srv__MotorGains__get_type_description,
  &interbotix_xs_msgs__srv__MotorGains__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_xs_msgs, srv, MotorGains)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_c::MotorGains_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
