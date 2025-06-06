// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_xs_msgs:msg/JointTrajectoryCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__rosidl_typesupport_introspection_c.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__functions.h"
#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__struct.h"


// Include directives for member types
// Member `cmd_type`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `traj`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `traj`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__msg__JointTrajectoryCommand__init(message_memory);
}

void interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_fini_function(void * message_memory)
{
  interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_member_array[3] = {
  {
    "cmd_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__msg__JointTrajectoryCommand, cmd_type),  // bytes offset in struct
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
    offsetof(interbotix_xs_msgs__msg__JointTrajectoryCommand, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__msg__JointTrajectoryCommand, traj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_members = {
  "interbotix_xs_msgs__msg",  // message namespace
  "JointTrajectoryCommand",  // message name
  3,  // number of fields
  sizeof(interbotix_xs_msgs__msg__JointTrajectoryCommand),
  false,  // has_any_key_member_
  interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_member_array,  // message members
  interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_members,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__msg__JointTrajectoryCommand__get_type_hash,
  &interbotix_xs_msgs__msg__JointTrajectoryCommand__get_type_description,
  &interbotix_xs_msgs__msg__JointTrajectoryCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, msg, JointTrajectoryCommand)() {
  interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__msg__JointTrajectoryCommand__rosidl_typesupport_introspection_c__JointTrajectoryCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
