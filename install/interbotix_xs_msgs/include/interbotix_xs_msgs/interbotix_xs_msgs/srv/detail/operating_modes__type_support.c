// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_xs_msgs:srv/OperatingModes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_xs_msgs/srv/detail/operating_modes__rosidl_typesupport_introspection_c.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_xs_msgs/srv/detail/operating_modes__functions.h"
#include "interbotix_xs_msgs/srv/detail/operating_modes__struct.h"


// Include directives for member types
// Member `cmd_type`
// Member `name`
// Member `mode`
// Member `profile_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__OperatingModes_Request__init(message_memory);
}

void interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__OperatingModes_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_member_array[6] = {
  {
    "cmd_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Request, cmd_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "profile_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Request, profile_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "profile_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Request, profile_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "profile_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Request, profile_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "OperatingModes_Request",  // message name
  6,  // number of fields
  sizeof(interbotix_xs_msgs__srv__OperatingModes_Request),
  false,  // has_any_key_member_
  interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_member_array,  // message members
  interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_members,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__OperatingModes_Request__get_type_hash,
  &interbotix_xs_msgs__srv__OperatingModes_Request__get_type_description,
  &interbotix_xs_msgs__srv__OperatingModes_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Request)() {
  if (!interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_xs_msgs/srv/detail/operating_modes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/operating_modes__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/operating_modes__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__OperatingModes_Response__init(message_memory);
}

void interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__OperatingModes_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "OperatingModes_Response",  // message name
  1,  // number of fields
  sizeof(interbotix_xs_msgs__srv__OperatingModes_Response),
  false,  // has_any_key_member_
  interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_member_array,  // message members
  interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_members,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__OperatingModes_Response__get_type_hash,
  &interbotix_xs_msgs__srv__OperatingModes_Response__get_type_description,
  &interbotix_xs_msgs__srv__OperatingModes_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Response)() {
  if (!interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_xs_msgs/srv/detail/operating_modes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/operating_modes__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/operating_modes__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "interbotix_xs_msgs/srv/operating_modes.h"
// Member `request`
// Member `response`
// already included above
// #include "interbotix_xs_msgs/srv/detail/operating_modes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__OperatingModes_Event__init(message_memory);
}

void interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__OperatingModes_Event__fini(message_memory);
}

size_t interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__size_function__OperatingModes_Event__request(
  const void * untyped_member)
{
  const interbotix_xs_msgs__srv__OperatingModes_Request__Sequence * member =
    (const interbotix_xs_msgs__srv__OperatingModes_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_const_function__OperatingModes_Event__request(
  const void * untyped_member, size_t index)
{
  const interbotix_xs_msgs__srv__OperatingModes_Request__Sequence * member =
    (const interbotix_xs_msgs__srv__OperatingModes_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_function__OperatingModes_Event__request(
  void * untyped_member, size_t index)
{
  interbotix_xs_msgs__srv__OperatingModes_Request__Sequence * member =
    (interbotix_xs_msgs__srv__OperatingModes_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__fetch_function__OperatingModes_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interbotix_xs_msgs__srv__OperatingModes_Request * item =
    ((const interbotix_xs_msgs__srv__OperatingModes_Request *)
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_const_function__OperatingModes_Event__request(untyped_member, index));
  interbotix_xs_msgs__srv__OperatingModes_Request * value =
    (interbotix_xs_msgs__srv__OperatingModes_Request *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__assign_function__OperatingModes_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interbotix_xs_msgs__srv__OperatingModes_Request * item =
    ((interbotix_xs_msgs__srv__OperatingModes_Request *)
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_function__OperatingModes_Event__request(untyped_member, index));
  const interbotix_xs_msgs__srv__OperatingModes_Request * value =
    (const interbotix_xs_msgs__srv__OperatingModes_Request *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__resize_function__OperatingModes_Event__request(
  void * untyped_member, size_t size)
{
  interbotix_xs_msgs__srv__OperatingModes_Request__Sequence * member =
    (interbotix_xs_msgs__srv__OperatingModes_Request__Sequence *)(untyped_member);
  interbotix_xs_msgs__srv__OperatingModes_Request__Sequence__fini(member);
  return interbotix_xs_msgs__srv__OperatingModes_Request__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__size_function__OperatingModes_Event__response(
  const void * untyped_member)
{
  const interbotix_xs_msgs__srv__OperatingModes_Response__Sequence * member =
    (const interbotix_xs_msgs__srv__OperatingModes_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_const_function__OperatingModes_Event__response(
  const void * untyped_member, size_t index)
{
  const interbotix_xs_msgs__srv__OperatingModes_Response__Sequence * member =
    (const interbotix_xs_msgs__srv__OperatingModes_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_function__OperatingModes_Event__response(
  void * untyped_member, size_t index)
{
  interbotix_xs_msgs__srv__OperatingModes_Response__Sequence * member =
    (interbotix_xs_msgs__srv__OperatingModes_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__fetch_function__OperatingModes_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interbotix_xs_msgs__srv__OperatingModes_Response * item =
    ((const interbotix_xs_msgs__srv__OperatingModes_Response *)
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_const_function__OperatingModes_Event__response(untyped_member, index));
  interbotix_xs_msgs__srv__OperatingModes_Response * value =
    (interbotix_xs_msgs__srv__OperatingModes_Response *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__assign_function__OperatingModes_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interbotix_xs_msgs__srv__OperatingModes_Response * item =
    ((interbotix_xs_msgs__srv__OperatingModes_Response *)
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_function__OperatingModes_Event__response(untyped_member, index));
  const interbotix_xs_msgs__srv__OperatingModes_Response * value =
    (const interbotix_xs_msgs__srv__OperatingModes_Response *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__resize_function__OperatingModes_Event__response(
  void * untyped_member, size_t size)
{
  interbotix_xs_msgs__srv__OperatingModes_Response__Sequence * member =
    (interbotix_xs_msgs__srv__OperatingModes_Response__Sequence *)(untyped_member);
  interbotix_xs_msgs__srv__OperatingModes_Response__Sequence__fini(member);
  return interbotix_xs_msgs__srv__OperatingModes_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Event, request),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__size_function__OperatingModes_Event__request,  // size() function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_const_function__OperatingModes_Event__request,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_function__OperatingModes_Event__request,  // get(index) function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__fetch_function__OperatingModes_Event__request,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__assign_function__OperatingModes_Event__request,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__resize_function__OperatingModes_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__OperatingModes_Event, response),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__size_function__OperatingModes_Event__response,  // size() function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_const_function__OperatingModes_Event__response,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__get_function__OperatingModes_Event__response,  // get(index) function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__fetch_function__OperatingModes_Event__response,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__assign_function__OperatingModes_Event__response,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__resize_function__OperatingModes_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "OperatingModes_Event",  // message name
  3,  // number of fields
  sizeof(interbotix_xs_msgs__srv__OperatingModes_Event),
  false,  // has_any_key_member_
  interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_member_array,  // message members
  interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_members,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__OperatingModes_Event__get_type_hash,
  &interbotix_xs_msgs__srv__OperatingModes_Event__get_type_description,
  &interbotix_xs_msgs__srv__OperatingModes_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Event)() {
  interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Request)();
  interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Response)();
  if (!interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/operating_modes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_service_members = {
  "interbotix_xs_msgs__srv",  // service namespace
  "OperatingModes",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_Request_message_type_support_handle,
  NULL,  // response message
  // interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_Response_message_type_support_handle
  NULL  // event_message
  // interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_Response_message_type_support_handle
};


static rosidl_service_type_support_t interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_service_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_service_members,
  get_service_typesupport_handle_function,
  &interbotix_xs_msgs__srv__OperatingModes_Request__rosidl_typesupport_introspection_c__OperatingModes_Request_message_type_support_handle,
  &interbotix_xs_msgs__srv__OperatingModes_Response__rosidl_typesupport_introspection_c__OperatingModes_Response_message_type_support_handle,
  &interbotix_xs_msgs__srv__OperatingModes_Event__rosidl_typesupport_introspection_c__OperatingModes_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interbotix_xs_msgs,
    srv,
    OperatingModes
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interbotix_xs_msgs,
    srv,
    OperatingModes
  ),
  &interbotix_xs_msgs__srv__OperatingModes__get_type_hash,
  &interbotix_xs_msgs__srv__OperatingModes__get_type_description,
  &interbotix_xs_msgs__srv__OperatingModes__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes)(void) {
  if (!interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_service_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, OperatingModes_Event)()->data;
  }

  return &interbotix_xs_msgs__srv__detail__operating_modes__rosidl_typesupport_introspection_c__OperatingModes_service_type_support_handle;
}
