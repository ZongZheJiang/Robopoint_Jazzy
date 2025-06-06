// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from interbotix_xs_msgs:msg/LocobotJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "interbotix_xs_msgs/msg/detail/locobot_joy__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interbotix_xs_msgs::msg::LocobotJoy & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
get_serialized_size(
  const interbotix_xs_msgs::msg::LocobotJoy & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
max_serialized_size_LocobotJoy(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
cdr_serialize_key(
  const interbotix_xs_msgs::msg::LocobotJoy & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
get_serialized_size_key(
  const interbotix_xs_msgs::msg::LocobotJoy & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
max_serialized_size_key_LocobotJoy(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interbotix_xs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, msg, LocobotJoy)();

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
