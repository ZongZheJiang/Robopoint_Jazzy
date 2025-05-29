// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robopoint_interfaces:srv/Query.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robopoint_interfaces/srv/query.h"


#ifndef ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__STRUCT_H_
#define ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'query'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Query in the package robopoint_interfaces.
typedef struct robopoint_interfaces__srv__Query_Request
{
  rosidl_runtime_c__String query;
} robopoint_interfaces__srv__Query_Request;

// Struct for a sequence of robopoint_interfaces__srv__Query_Request.
typedef struct robopoint_interfaces__srv__Query_Request__Sequence
{
  robopoint_interfaces__srv__Query_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robopoint_interfaces__srv__Query_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Query in the package robopoint_interfaces.
typedef struct robopoint_interfaces__srv__Query_Response
{
  uint8_t structure_needs_at_least_one_member;
} robopoint_interfaces__srv__Query_Response;

// Struct for a sequence of robopoint_interfaces__srv__Query_Response.
typedef struct robopoint_interfaces__srv__Query_Response__Sequence
{
  robopoint_interfaces__srv__Query_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robopoint_interfaces__srv__Query_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robopoint_interfaces__srv__Query_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robopoint_interfaces__srv__Query_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Query in the package robopoint_interfaces.
typedef struct robopoint_interfaces__srv__Query_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robopoint_interfaces__srv__Query_Request__Sequence request;
  robopoint_interfaces__srv__Query_Response__Sequence response;
} robopoint_interfaces__srv__Query_Event;

// Struct for a sequence of robopoint_interfaces__srv__Query_Event.
typedef struct robopoint_interfaces__srv__Query_Event__Sequence
{
  robopoint_interfaces__srv__Query_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robopoint_interfaces__srv__Query_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__STRUCT_H_
