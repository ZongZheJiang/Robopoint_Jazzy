// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interbotix_xs_msgs:msg/ArmJoy.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/arm_joy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_xs_msgs/msg/detail/arm_joy__struct.h"
#include "interbotix_xs_msgs/msg/detail/arm_joy__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArmJoy__ros_msg_type = interbotix_xs_msgs__msg__ArmJoy;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
bool cdr_serialize_interbotix_xs_msgs__msg__ArmJoy(
  const interbotix_xs_msgs__msg__ArmJoy * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ee_x_cmd
  {
    cdr << ros_message->ee_x_cmd;
  }

  // Field name: ee_y_cmd
  {
    cdr << ros_message->ee_y_cmd;
  }

  // Field name: ee_z_cmd
  {
    cdr << ros_message->ee_z_cmd;
  }

  // Field name: ee_roll_cmd
  {
    cdr << ros_message->ee_roll_cmd;
  }

  // Field name: ee_pitch_cmd
  {
    cdr << ros_message->ee_pitch_cmd;
  }

  // Field name: waist_cmd
  {
    cdr << ros_message->waist_cmd;
  }

  // Field name: gripper_cmd
  {
    cdr << ros_message->gripper_cmd;
  }

  // Field name: pose_cmd
  {
    cdr << ros_message->pose_cmd;
  }

  // Field name: speed_cmd
  {
    cdr << ros_message->speed_cmd;
  }

  // Field name: speed_toggle_cmd
  {
    cdr << ros_message->speed_toggle_cmd;
  }

  // Field name: gripper_pwm_cmd
  {
    cdr << ros_message->gripper_pwm_cmd;
  }

  // Field name: torque_cmd
  {
    cdr << ros_message->torque_cmd;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
bool cdr_deserialize_interbotix_xs_msgs__msg__ArmJoy(
  eprosima::fastcdr::Cdr & cdr,
  interbotix_xs_msgs__msg__ArmJoy * ros_message)
{
  // Field name: ee_x_cmd
  {
    cdr >> ros_message->ee_x_cmd;
  }

  // Field name: ee_y_cmd
  {
    cdr >> ros_message->ee_y_cmd;
  }

  // Field name: ee_z_cmd
  {
    cdr >> ros_message->ee_z_cmd;
  }

  // Field name: ee_roll_cmd
  {
    cdr >> ros_message->ee_roll_cmd;
  }

  // Field name: ee_pitch_cmd
  {
    cdr >> ros_message->ee_pitch_cmd;
  }

  // Field name: waist_cmd
  {
    cdr >> ros_message->waist_cmd;
  }

  // Field name: gripper_cmd
  {
    cdr >> ros_message->gripper_cmd;
  }

  // Field name: pose_cmd
  {
    cdr >> ros_message->pose_cmd;
  }

  // Field name: speed_cmd
  {
    cdr >> ros_message->speed_cmd;
  }

  // Field name: speed_toggle_cmd
  {
    cdr >> ros_message->speed_toggle_cmd;
  }

  // Field name: gripper_pwm_cmd
  {
    cdr >> ros_message->gripper_pwm_cmd;
  }

  // Field name: torque_cmd
  {
    cdr >> ros_message->torque_cmd;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t get_serialized_size_interbotix_xs_msgs__msg__ArmJoy(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmJoy__ros_msg_type * ros_message = static_cast<const _ArmJoy__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ee_x_cmd
  {
    size_t item_size = sizeof(ros_message->ee_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ee_y_cmd
  {
    size_t item_size = sizeof(ros_message->ee_y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ee_z_cmd
  {
    size_t item_size = sizeof(ros_message->ee_z_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ee_roll_cmd
  {
    size_t item_size = sizeof(ros_message->ee_roll_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ee_pitch_cmd
  {
    size_t item_size = sizeof(ros_message->ee_pitch_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: waist_cmd
  {
    size_t item_size = sizeof(ros_message->waist_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_cmd
  {
    size_t item_size = sizeof(ros_message->gripper_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pose_cmd
  {
    size_t item_size = sizeof(ros_message->pose_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_cmd
  {
    size_t item_size = sizeof(ros_message->speed_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_toggle_cmd
  {
    size_t item_size = sizeof(ros_message->speed_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_pwm_cmd
  {
    size_t item_size = sizeof(ros_message->gripper_pwm_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: torque_cmd
  {
    size_t item_size = sizeof(ros_message->torque_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t max_serialized_size_interbotix_xs_msgs__msg__ArmJoy(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: ee_x_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ee_y_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ee_z_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ee_roll_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ee_pitch_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: waist_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripper_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pose_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: speed_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: speed_toggle_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripper_pwm_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: torque_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interbotix_xs_msgs__msg__ArmJoy;
    is_plain =
      (
      offsetof(DataType, torque_cmd) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
bool cdr_serialize_key_interbotix_xs_msgs__msg__ArmJoy(
  const interbotix_xs_msgs__msg__ArmJoy * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ee_x_cmd
  {
    cdr << ros_message->ee_x_cmd;
  }

  // Field name: ee_y_cmd
  {
    cdr << ros_message->ee_y_cmd;
  }

  // Field name: ee_z_cmd
  {
    cdr << ros_message->ee_z_cmd;
  }

  // Field name: ee_roll_cmd
  {
    cdr << ros_message->ee_roll_cmd;
  }

  // Field name: ee_pitch_cmd
  {
    cdr << ros_message->ee_pitch_cmd;
  }

  // Field name: waist_cmd
  {
    cdr << ros_message->waist_cmd;
  }

  // Field name: gripper_cmd
  {
    cdr << ros_message->gripper_cmd;
  }

  // Field name: pose_cmd
  {
    cdr << ros_message->pose_cmd;
  }

  // Field name: speed_cmd
  {
    cdr << ros_message->speed_cmd;
  }

  // Field name: speed_toggle_cmd
  {
    cdr << ros_message->speed_toggle_cmd;
  }

  // Field name: gripper_pwm_cmd
  {
    cdr << ros_message->gripper_pwm_cmd;
  }

  // Field name: torque_cmd
  {
    cdr << ros_message->torque_cmd;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t get_serialized_size_key_interbotix_xs_msgs__msg__ArmJoy(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmJoy__ros_msg_type * ros_message = static_cast<const _ArmJoy__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ee_x_cmd
  {
    size_t item_size = sizeof(ros_message->ee_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ee_y_cmd
  {
    size_t item_size = sizeof(ros_message->ee_y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ee_z_cmd
  {
    size_t item_size = sizeof(ros_message->ee_z_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ee_roll_cmd
  {
    size_t item_size = sizeof(ros_message->ee_roll_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ee_pitch_cmd
  {
    size_t item_size = sizeof(ros_message->ee_pitch_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: waist_cmd
  {
    size_t item_size = sizeof(ros_message->waist_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_cmd
  {
    size_t item_size = sizeof(ros_message->gripper_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pose_cmd
  {
    size_t item_size = sizeof(ros_message->pose_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_cmd
  {
    size_t item_size = sizeof(ros_message->speed_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_toggle_cmd
  {
    size_t item_size = sizeof(ros_message->speed_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_pwm_cmd
  {
    size_t item_size = sizeof(ros_message->gripper_pwm_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: torque_cmd
  {
    size_t item_size = sizeof(ros_message->torque_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t max_serialized_size_key_interbotix_xs_msgs__msg__ArmJoy(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: ee_x_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ee_y_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ee_z_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ee_roll_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ee_pitch_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: waist_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripper_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pose_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: speed_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: speed_toggle_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripper_pwm_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: torque_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interbotix_xs_msgs__msg__ArmJoy;
    is_plain =
      (
      offsetof(DataType, torque_cmd) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ArmJoy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const interbotix_xs_msgs__msg__ArmJoy * ros_message = static_cast<const interbotix_xs_msgs__msg__ArmJoy *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_interbotix_xs_msgs__msg__ArmJoy(ros_message, cdr);
}

static bool _ArmJoy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  interbotix_xs_msgs__msg__ArmJoy * ros_message = static_cast<interbotix_xs_msgs__msg__ArmJoy *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_interbotix_xs_msgs__msg__ArmJoy(cdr, ros_message);
}

static uint32_t _ArmJoy__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_xs_msgs__msg__ArmJoy(
      untyped_ros_message, 0));
}

static size_t _ArmJoy__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interbotix_xs_msgs__msg__ArmJoy(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmJoy = {
  "interbotix_xs_msgs::msg",
  "ArmJoy",
  _ArmJoy__cdr_serialize,
  _ArmJoy__cdr_deserialize,
  _ArmJoy__get_serialized_size,
  _ArmJoy__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ArmJoy__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmJoy,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__msg__ArmJoy__get_type_hash,
  &interbotix_xs_msgs__msg__ArmJoy__get_type_description,
  &interbotix_xs_msgs__msg__ArmJoy__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, msg, ArmJoy)() {
  return &_ArmJoy__type_support;
}

#if defined(__cplusplus)
}
#endif
