// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorGains_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorGains_Request_type_support_ids_t;

static const _MotorGains_Request_type_support_ids_t _MotorGains_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, srv, MotorGains_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, MotorGains_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorGains_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__MotorGains_Request__get_type_hash,
  &interbotix_xs_msgs__srv__MotorGains_Request__get_type_description,
  &interbotix_xs_msgs__srv__MotorGains_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Request>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_cpp::MotorGains_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interbotix_xs_msgs, srv, MotorGains_Request)() {
  return get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Request>();
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
// #include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__struct.hpp"
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

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorGains_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorGains_Response_type_support_ids_t;

static const _MotorGains_Response_type_support_ids_t _MotorGains_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, srv, MotorGains_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, MotorGains_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorGains_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__MotorGains_Response__get_type_hash,
  &interbotix_xs_msgs__srv__MotorGains_Response__get_type_description,
  &interbotix_xs_msgs__srv__MotorGains_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Response>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_cpp::MotorGains_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interbotix_xs_msgs, srv, MotorGains_Response)() {
  return get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Response>();
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
// #include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__struct.hpp"
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

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorGains_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorGains_Event_type_support_ids_t;

static const _MotorGains_Event_type_support_ids_t _MotorGains_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, srv, MotorGains_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, MotorGains_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorGains_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__MotorGains_Event__get_type_hash,
  &interbotix_xs_msgs__srv__MotorGains_Event__get_type_description,
  &interbotix_xs_msgs__srv__MotorGains_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Event>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_cpp::MotorGains_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interbotix_xs_msgs, srv, MotorGains_Event)() {
  return get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Event>();
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
// #include "interbotix_xs_msgs/srv/detail/motor_gains__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorGains_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorGains_type_support_ids_t;

static const _MotorGains_type_support_ids_t _MotorGains_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, srv, MotorGains)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, MotorGains)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorGains_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interbotix_xs_msgs::srv::MotorGains_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<interbotix_xs_msgs::srv::MotorGains>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<interbotix_xs_msgs::srv::MotorGains>,
  &interbotix_xs_msgs__srv__MotorGains__get_type_hash,
  &interbotix_xs_msgs__srv__MotorGains__get_type_description,
  &interbotix_xs_msgs__srv__MotorGains__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interbotix_xs_msgs::srv::MotorGains>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_cpp::MotorGains_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, interbotix_xs_msgs, srv, MotorGains)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<interbotix_xs_msgs::srv::MotorGains>();
}

#ifdef __cplusplus
}
#endif
