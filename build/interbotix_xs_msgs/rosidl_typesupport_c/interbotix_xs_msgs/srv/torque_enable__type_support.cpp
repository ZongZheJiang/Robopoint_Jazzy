// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:srv/TorqueEnable.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interbotix_xs_msgs/srv/detail/torque_enable__struct.h"
#include "interbotix_xs_msgs/srv/detail/torque_enable__type_support.h"
#include "interbotix_xs_msgs/srv/detail/torque_enable__functions.h"
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

typedef struct _TorqueEnable_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TorqueEnable_Request_type_support_ids_t;

static const _TorqueEnable_Request_type_support_ids_t _TorqueEnable_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TorqueEnable_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TorqueEnable_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TorqueEnable_Request_type_support_symbol_names_t _TorqueEnable_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, TorqueEnable_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, TorqueEnable_Request)),
  }
};

typedef struct _TorqueEnable_Request_type_support_data_t
{
  void * data[2];
} _TorqueEnable_Request_type_support_data_t;

static _TorqueEnable_Request_type_support_data_t _TorqueEnable_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TorqueEnable_Request_message_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_TorqueEnable_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TorqueEnable_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TorqueEnable_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TorqueEnable_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TorqueEnable_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__TorqueEnable_Request__get_type_hash,
  &interbotix_xs_msgs__srv__TorqueEnable_Request__get_type_description,
  &interbotix_xs_msgs__srv__TorqueEnable_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_xs_msgs, srv, TorqueEnable_Request)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_c::TorqueEnable_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/torque_enable__struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/torque_enable__type_support.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/torque_enable__functions.h"
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

typedef struct _TorqueEnable_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TorqueEnable_Response_type_support_ids_t;

static const _TorqueEnable_Response_type_support_ids_t _TorqueEnable_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TorqueEnable_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TorqueEnable_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TorqueEnable_Response_type_support_symbol_names_t _TorqueEnable_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, TorqueEnable_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, TorqueEnable_Response)),
  }
};

typedef struct _TorqueEnable_Response_type_support_data_t
{
  void * data[2];
} _TorqueEnable_Response_type_support_data_t;

static _TorqueEnable_Response_type_support_data_t _TorqueEnable_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TorqueEnable_Response_message_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_TorqueEnable_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TorqueEnable_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TorqueEnable_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TorqueEnable_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TorqueEnable_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__TorqueEnable_Response__get_type_hash,
  &interbotix_xs_msgs__srv__TorqueEnable_Response__get_type_description,
  &interbotix_xs_msgs__srv__TorqueEnable_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_xs_msgs, srv, TorqueEnable_Response)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_c::TorqueEnable_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/torque_enable__struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/torque_enable__type_support.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/torque_enable__functions.h"
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

typedef struct _TorqueEnable_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TorqueEnable_Event_type_support_ids_t;

static const _TorqueEnable_Event_type_support_ids_t _TorqueEnable_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TorqueEnable_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TorqueEnable_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TorqueEnable_Event_type_support_symbol_names_t _TorqueEnable_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, TorqueEnable_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, TorqueEnable_Event)),
  }
};

typedef struct _TorqueEnable_Event_type_support_data_t
{
  void * data[2];
} _TorqueEnable_Event_type_support_data_t;

static _TorqueEnable_Event_type_support_data_t _TorqueEnable_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TorqueEnable_Event_message_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_TorqueEnable_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TorqueEnable_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TorqueEnable_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TorqueEnable_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TorqueEnable_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__TorqueEnable_Event__get_type_hash,
  &interbotix_xs_msgs__srv__TorqueEnable_Event__get_type_description,
  &interbotix_xs_msgs__srv__TorqueEnable_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_xs_msgs, srv, TorqueEnable_Event)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_c::TorqueEnable_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/torque_enable__type_support.h"
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
typedef struct _TorqueEnable_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TorqueEnable_type_support_ids_t;

static const _TorqueEnable_type_support_ids_t _TorqueEnable_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TorqueEnable_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TorqueEnable_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TorqueEnable_type_support_symbol_names_t _TorqueEnable_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, TorqueEnable)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, TorqueEnable)),
  }
};

typedef struct _TorqueEnable_type_support_data_t
{
  void * data[2];
} _TorqueEnable_type_support_data_t;

static _TorqueEnable_type_support_data_t _TorqueEnable_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TorqueEnable_service_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_TorqueEnable_service_typesupport_ids.typesupport_identifier[0],
  &_TorqueEnable_service_typesupport_symbol_names.symbol_name[0],
  &_TorqueEnable_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TorqueEnable_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TorqueEnable_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &TorqueEnable_Request_message_type_support_handle,
  &TorqueEnable_Response_message_type_support_handle,
  &TorqueEnable_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interbotix_xs_msgs,
    srv,
    TorqueEnable
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interbotix_xs_msgs,
    srv,
    TorqueEnable
  ),
  &interbotix_xs_msgs__srv__TorqueEnable__get_type_hash,
  &interbotix_xs_msgs__srv__TorqueEnable__get_type_description,
  &interbotix_xs_msgs__srv__TorqueEnable__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_xs_msgs, srv, TorqueEnable)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_c::TorqueEnable_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
