// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:msg/LocobotJoy.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/locobot_joy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interbotix_xs_msgs/msg/detail/locobot_joy__functions.h"
#include "interbotix_xs_msgs/msg/detail/locobot_joy__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interbotix_xs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
cdr_serialize(
  const interbotix_xs_msgs::msg::LocobotJoy & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base_x_cmd
  cdr << ros_message.base_x_cmd;

  // Member: base_theta_cmd
  cdr << ros_message.base_theta_cmd;

  // Member: base_reset_odom_cmd
  cdr << ros_message.base_reset_odom_cmd;

  // Member: pan_cmd
  cdr << ros_message.pan_cmd;

  // Member: tilt_cmd
  cdr << ros_message.tilt_cmd;

  // Member: ee_x_cmd
  cdr << ros_message.ee_x_cmd;

  // Member: ee_y_cmd
  cdr << ros_message.ee_y_cmd;

  // Member: ee_z_cmd
  cdr << ros_message.ee_z_cmd;

  // Member: ee_roll_cmd
  cdr << ros_message.ee_roll_cmd;

  // Member: ee_pitch_cmd
  cdr << ros_message.ee_pitch_cmd;

  // Member: waist_cmd
  cdr << ros_message.waist_cmd;

  // Member: gripper_cmd
  cdr << ros_message.gripper_cmd;

  // Member: pose_cmd
  cdr << ros_message.pose_cmd;

  // Member: speed_cmd
  cdr << ros_message.speed_cmd;

  // Member: speed_toggle_cmd
  cdr << ros_message.speed_toggle_cmd;

  // Member: gripper_pwm_cmd
  cdr << ros_message.gripper_pwm_cmd;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interbotix_xs_msgs::msg::LocobotJoy & ros_message)
{
  // Member: base_x_cmd
  cdr >> ros_message.base_x_cmd;

  // Member: base_theta_cmd
  cdr >> ros_message.base_theta_cmd;

  // Member: base_reset_odom_cmd
  cdr >> ros_message.base_reset_odom_cmd;

  // Member: pan_cmd
  cdr >> ros_message.pan_cmd;

  // Member: tilt_cmd
  cdr >> ros_message.tilt_cmd;

  // Member: ee_x_cmd
  cdr >> ros_message.ee_x_cmd;

  // Member: ee_y_cmd
  cdr >> ros_message.ee_y_cmd;

  // Member: ee_z_cmd
  cdr >> ros_message.ee_z_cmd;

  // Member: ee_roll_cmd
  cdr >> ros_message.ee_roll_cmd;

  // Member: ee_pitch_cmd
  cdr >> ros_message.ee_pitch_cmd;

  // Member: waist_cmd
  cdr >> ros_message.waist_cmd;

  // Member: gripper_cmd
  cdr >> ros_message.gripper_cmd;

  // Member: pose_cmd
  cdr >> ros_message.pose_cmd;

  // Member: speed_cmd
  cdr >> ros_message.speed_cmd;

  // Member: speed_toggle_cmd
  cdr >> ros_message.speed_toggle_cmd;

  // Member: gripper_pwm_cmd
  cdr >> ros_message.gripper_pwm_cmd;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
get_serialized_size(
  const interbotix_xs_msgs::msg::LocobotJoy & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base_x_cmd
  {
    size_t item_size = sizeof(ros_message.base_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: base_theta_cmd
  {
    size_t item_size = sizeof(ros_message.base_theta_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: base_reset_odom_cmd
  {
    size_t item_size = sizeof(ros_message.base_reset_odom_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pan_cmd
  {
    size_t item_size = sizeof(ros_message.pan_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tilt_cmd
  {
    size_t item_size = sizeof(ros_message.tilt_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_x_cmd
  {
    size_t item_size = sizeof(ros_message.ee_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_y_cmd
  {
    size_t item_size = sizeof(ros_message.ee_y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_z_cmd
  {
    size_t item_size = sizeof(ros_message.ee_z_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_roll_cmd
  {
    size_t item_size = sizeof(ros_message.ee_roll_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_pitch_cmd
  {
    size_t item_size = sizeof(ros_message.ee_pitch_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: waist_cmd
  {
    size_t item_size = sizeof(ros_message.waist_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gripper_cmd
  {
    size_t item_size = sizeof(ros_message.gripper_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pose_cmd
  {
    size_t item_size = sizeof(ros_message.pose_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: speed_cmd
  {
    size_t item_size = sizeof(ros_message.speed_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: speed_toggle_cmd
  {
    size_t item_size = sizeof(ros_message.speed_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gripper_pwm_cmd
  {
    size_t item_size = sizeof(ros_message.gripper_pwm_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
max_serialized_size_LocobotJoy(
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

  // Member: base_x_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: base_theta_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: base_reset_odom_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: pan_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tilt_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ee_x_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ee_y_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ee_z_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ee_roll_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ee_pitch_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: waist_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: gripper_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: pose_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: speed_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: speed_toggle_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: gripper_pwm_cmd
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
    using DataType = interbotix_xs_msgs::msg::LocobotJoy;
    is_plain =
      (
      offsetof(DataType, gripper_pwm_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
cdr_serialize_key(
  const interbotix_xs_msgs::msg::LocobotJoy & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base_x_cmd
  cdr << ros_message.base_x_cmd;

  // Member: base_theta_cmd
  cdr << ros_message.base_theta_cmd;

  // Member: base_reset_odom_cmd
  cdr << ros_message.base_reset_odom_cmd;

  // Member: pan_cmd
  cdr << ros_message.pan_cmd;

  // Member: tilt_cmd
  cdr << ros_message.tilt_cmd;

  // Member: ee_x_cmd
  cdr << ros_message.ee_x_cmd;

  // Member: ee_y_cmd
  cdr << ros_message.ee_y_cmd;

  // Member: ee_z_cmd
  cdr << ros_message.ee_z_cmd;

  // Member: ee_roll_cmd
  cdr << ros_message.ee_roll_cmd;

  // Member: ee_pitch_cmd
  cdr << ros_message.ee_pitch_cmd;

  // Member: waist_cmd
  cdr << ros_message.waist_cmd;

  // Member: gripper_cmd
  cdr << ros_message.gripper_cmd;

  // Member: pose_cmd
  cdr << ros_message.pose_cmd;

  // Member: speed_cmd
  cdr << ros_message.speed_cmd;

  // Member: speed_toggle_cmd
  cdr << ros_message.speed_toggle_cmd;

  // Member: gripper_pwm_cmd
  cdr << ros_message.gripper_pwm_cmd;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
get_serialized_size_key(
  const interbotix_xs_msgs::msg::LocobotJoy & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base_x_cmd
  {
    size_t item_size = sizeof(ros_message.base_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: base_theta_cmd
  {
    size_t item_size = sizeof(ros_message.base_theta_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: base_reset_odom_cmd
  {
    size_t item_size = sizeof(ros_message.base_reset_odom_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pan_cmd
  {
    size_t item_size = sizeof(ros_message.pan_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tilt_cmd
  {
    size_t item_size = sizeof(ros_message.tilt_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_x_cmd
  {
    size_t item_size = sizeof(ros_message.ee_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_y_cmd
  {
    size_t item_size = sizeof(ros_message.ee_y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_z_cmd
  {
    size_t item_size = sizeof(ros_message.ee_z_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_roll_cmd
  {
    size_t item_size = sizeof(ros_message.ee_roll_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ee_pitch_cmd
  {
    size_t item_size = sizeof(ros_message.ee_pitch_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: waist_cmd
  {
    size_t item_size = sizeof(ros_message.waist_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gripper_cmd
  {
    size_t item_size = sizeof(ros_message.gripper_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pose_cmd
  {
    size_t item_size = sizeof(ros_message.pose_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: speed_cmd
  {
    size_t item_size = sizeof(ros_message.speed_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: speed_toggle_cmd
  {
    size_t item_size = sizeof(ros_message.speed_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gripper_pwm_cmd
  {
    size_t item_size = sizeof(ros_message.gripper_pwm_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
max_serialized_size_key_LocobotJoy(
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

  // Member: base_x_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: base_theta_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: base_reset_odom_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pan_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tilt_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ee_x_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ee_y_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ee_z_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ee_roll_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ee_pitch_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: waist_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gripper_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pose_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_toggle_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gripper_pwm_cmd
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
    using DataType = interbotix_xs_msgs::msg::LocobotJoy;
    is_plain =
      (
      offsetof(DataType, gripper_pwm_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _LocobotJoy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interbotix_xs_msgs::msg::LocobotJoy *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LocobotJoy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interbotix_xs_msgs::msg::LocobotJoy *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LocobotJoy__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interbotix_xs_msgs::msg::LocobotJoy *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LocobotJoy__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LocobotJoy(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LocobotJoy__callbacks = {
  "interbotix_xs_msgs::msg",
  "LocobotJoy",
  _LocobotJoy__cdr_serialize,
  _LocobotJoy__cdr_deserialize,
  _LocobotJoy__get_serialized_size,
  _LocobotJoy__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LocobotJoy__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LocobotJoy__callbacks,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__msg__LocobotJoy__get_type_hash,
  &interbotix_xs_msgs__msg__LocobotJoy__get_type_description,
  &interbotix_xs_msgs__msg__LocobotJoy__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::msg::LocobotJoy>()
{
  return &interbotix_xs_msgs::msg::typesupport_fastrtps_cpp::_LocobotJoy__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, msg, LocobotJoy)() {
  return &interbotix_xs_msgs::msg::typesupport_fastrtps_cpp::_LocobotJoy__handle;
}

#ifdef __cplusplus
}
#endif
