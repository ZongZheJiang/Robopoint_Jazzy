// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interbotix_xs_msgs/srv/detail/robot_info__functions.h"
#include "interbotix_xs_msgs/srv/detail/robot_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotInfo_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interbotix_xs_msgs::srv::RobotInfo_Request(_init);
}

void RobotInfo_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interbotix_xs_msgs::srv::RobotInfo_Request *>(message_memory);
  typed_message->~RobotInfo_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotInfo_Request_message_member_array[2] = {
  {
    "cmd_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Request, cmd_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Request, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotInfo_Request_message_members = {
  "interbotix_xs_msgs::srv",  // message namespace
  "RobotInfo_Request",  // message name
  2,  // number of fields
  sizeof(interbotix_xs_msgs::srv::RobotInfo_Request),
  false,  // has_any_key_member_
  RobotInfo_Request_message_member_array,  // message members
  RobotInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotInfo_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__RobotInfo_Request__get_type_hash,
  &interbotix_xs_msgs__srv__RobotInfo_Request__get_type_description,
  &interbotix_xs_msgs__srv__RobotInfo_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::srv::RobotInfo_Request>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_introspection_cpp::RobotInfo_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, RobotInfo_Request)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_introspection_cpp::RobotInfo_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotInfo_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interbotix_xs_msgs::srv::RobotInfo_Response(_init);
}

void RobotInfo_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interbotix_xs_msgs::srv::RobotInfo_Response *>(message_memory);
  typed_message->~RobotInfo_Response();
}

size_t size_function__RobotInfo_Response__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Response__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Response__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Response__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RobotInfo_Response__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Response__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RobotInfo_Response__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Response__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotInfo_Response__joint_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Response__joint_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Response__joint_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Response__joint_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__RobotInfo_Response__joint_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Response__joint_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__RobotInfo_Response__joint_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Response__joint_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotInfo_Response__joint_lower_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Response__joint_lower_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Response__joint_lower_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Response__joint_lower_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RobotInfo_Response__joint_lower_limits(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Response__joint_lower_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RobotInfo_Response__joint_lower_limits(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Response__joint_lower_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotInfo_Response__joint_upper_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Response__joint_upper_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Response__joint_upper_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Response__joint_upper_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RobotInfo_Response__joint_upper_limits(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Response__joint_upper_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RobotInfo_Response__joint_upper_limits(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Response__joint_upper_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotInfo_Response__joint_velocity_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Response__joint_velocity_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Response__joint_velocity_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Response__joint_velocity_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RobotInfo_Response__joint_velocity_limits(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Response__joint_velocity_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RobotInfo_Response__joint_velocity_limits(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Response__joint_velocity_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotInfo_Response__joint_sleep_positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Response__joint_sleep_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Response__joint_sleep_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Response__joint_sleep_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RobotInfo_Response__joint_sleep_positions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Response__joint_sleep_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RobotInfo_Response__joint_sleep_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Response__joint_sleep_positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotInfo_Response__joint_state_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Response__joint_state_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Response__joint_state_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Response__joint_state_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__RobotInfo_Response__joint_state_indices(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Response__joint_state_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__RobotInfo_Response__joint_state_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Response__joint_state_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotInfo_Response__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Response__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Response__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Response__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RobotInfo_Response__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Response__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RobotInfo_Response__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Response__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotInfo_Response_message_member_array[11] = {
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "profile_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, profile_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Response__joint_names,  // size() function pointer
    get_const_function__RobotInfo_Response__joint_names,  // get_const(index) function pointer
    get_function__RobotInfo_Response__joint_names,  // get(index) function pointer
    fetch_function__RobotInfo_Response__joint_names,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Response__joint_names,  // assign(index, value) function pointer
    resize_function__RobotInfo_Response__joint_names  // resize(index) function pointer
  },
  {
    "joint_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, joint_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Response__joint_ids,  // size() function pointer
    get_const_function__RobotInfo_Response__joint_ids,  // get_const(index) function pointer
    get_function__RobotInfo_Response__joint_ids,  // get(index) function pointer
    fetch_function__RobotInfo_Response__joint_ids,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Response__joint_ids,  // assign(index, value) function pointer
    resize_function__RobotInfo_Response__joint_ids  // resize(index) function pointer
  },
  {
    "joint_lower_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, joint_lower_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Response__joint_lower_limits,  // size() function pointer
    get_const_function__RobotInfo_Response__joint_lower_limits,  // get_const(index) function pointer
    get_function__RobotInfo_Response__joint_lower_limits,  // get(index) function pointer
    fetch_function__RobotInfo_Response__joint_lower_limits,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Response__joint_lower_limits,  // assign(index, value) function pointer
    resize_function__RobotInfo_Response__joint_lower_limits  // resize(index) function pointer
  },
  {
    "joint_upper_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, joint_upper_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Response__joint_upper_limits,  // size() function pointer
    get_const_function__RobotInfo_Response__joint_upper_limits,  // get_const(index) function pointer
    get_function__RobotInfo_Response__joint_upper_limits,  // get(index) function pointer
    fetch_function__RobotInfo_Response__joint_upper_limits,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Response__joint_upper_limits,  // assign(index, value) function pointer
    resize_function__RobotInfo_Response__joint_upper_limits  // resize(index) function pointer
  },
  {
    "joint_velocity_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, joint_velocity_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Response__joint_velocity_limits,  // size() function pointer
    get_const_function__RobotInfo_Response__joint_velocity_limits,  // get_const(index) function pointer
    get_function__RobotInfo_Response__joint_velocity_limits,  // get(index) function pointer
    fetch_function__RobotInfo_Response__joint_velocity_limits,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Response__joint_velocity_limits,  // assign(index, value) function pointer
    resize_function__RobotInfo_Response__joint_velocity_limits  // resize(index) function pointer
  },
  {
    "joint_sleep_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, joint_sleep_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Response__joint_sleep_positions,  // size() function pointer
    get_const_function__RobotInfo_Response__joint_sleep_positions,  // get_const(index) function pointer
    get_function__RobotInfo_Response__joint_sleep_positions,  // get(index) function pointer
    fetch_function__RobotInfo_Response__joint_sleep_positions,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Response__joint_sleep_positions,  // assign(index, value) function pointer
    resize_function__RobotInfo_Response__joint_sleep_positions  // resize(index) function pointer
  },
  {
    "joint_state_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, joint_state_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Response__joint_state_indices,  // size() function pointer
    get_const_function__RobotInfo_Response__joint_state_indices,  // get_const(index) function pointer
    get_function__RobotInfo_Response__joint_state_indices,  // get(index) function pointer
    fetch_function__RobotInfo_Response__joint_state_indices,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Response__joint_state_indices,  // assign(index, value) function pointer
    resize_function__RobotInfo_Response__joint_state_indices  // resize(index) function pointer
  },
  {
    "num_joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, num_joints),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Response, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Response__name,  // size() function pointer
    get_const_function__RobotInfo_Response__name,  // get_const(index) function pointer
    get_function__RobotInfo_Response__name,  // get(index) function pointer
    fetch_function__RobotInfo_Response__name,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Response__name,  // assign(index, value) function pointer
    resize_function__RobotInfo_Response__name  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotInfo_Response_message_members = {
  "interbotix_xs_msgs::srv",  // message namespace
  "RobotInfo_Response",  // message name
  11,  // number of fields
  sizeof(interbotix_xs_msgs::srv::RobotInfo_Response),
  false,  // has_any_key_member_
  RobotInfo_Response_message_member_array,  // message members
  RobotInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotInfo_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__RobotInfo_Response__get_type_hash,
  &interbotix_xs_msgs__srv__RobotInfo_Response__get_type_description,
  &interbotix_xs_msgs__srv__RobotInfo_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::srv::RobotInfo_Response>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_introspection_cpp::RobotInfo_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, RobotInfo_Response)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_introspection_cpp::RobotInfo_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotInfo_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interbotix_xs_msgs::srv::RobotInfo_Event(_init);
}

void RobotInfo_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interbotix_xs_msgs::srv::RobotInfo_Event *>(message_memory);
  typed_message->~RobotInfo_Event();
}

size_t size_function__RobotInfo_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interbotix_xs_msgs::srv::RobotInfo_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interbotix_xs_msgs::srv::RobotInfo_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interbotix_xs_msgs::srv::RobotInfo_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const interbotix_xs_msgs::srv::RobotInfo_Request *>(
    get_const_function__RobotInfo_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<interbotix_xs_msgs::srv::RobotInfo_Request *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<interbotix_xs_msgs::srv::RobotInfo_Request *>(
    get_function__RobotInfo_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const interbotix_xs_msgs::srv::RobotInfo_Request *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interbotix_xs_msgs::srv::RobotInfo_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotInfo_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interbotix_xs_msgs::srv::RobotInfo_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotInfo_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interbotix_xs_msgs::srv::RobotInfo_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotInfo_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interbotix_xs_msgs::srv::RobotInfo_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const interbotix_xs_msgs::srv::RobotInfo_Response *>(
    get_const_function__RobotInfo_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<interbotix_xs_msgs::srv::RobotInfo_Response *>(untyped_value);
  value = item;
}

void assign_function__RobotInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<interbotix_xs_msgs::srv::RobotInfo_Response *>(
    get_function__RobotInfo_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const interbotix_xs_msgs::srv::RobotInfo_Response *>(untyped_value);
  item = value;
}

void resize_function__RobotInfo_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interbotix_xs_msgs::srv::RobotInfo_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interbotix_xs_msgs::srv::RobotInfo_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Event__request,  // size() function pointer
    get_const_function__RobotInfo_Event__request,  // get_const(index) function pointer
    get_function__RobotInfo_Event__request,  // get(index) function pointer
    fetch_function__RobotInfo_Event__request,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Event__request,  // assign(index, value) function pointer
    resize_function__RobotInfo_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interbotix_xs_msgs::srv::RobotInfo_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interbotix_xs_msgs::srv::RobotInfo_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotInfo_Event__response,  // size() function pointer
    get_const_function__RobotInfo_Event__response,  // get_const(index) function pointer
    get_function__RobotInfo_Event__response,  // get(index) function pointer
    fetch_function__RobotInfo_Event__response,  // fetch(index, &value) function pointer
    assign_function__RobotInfo_Event__response,  // assign(index, value) function pointer
    resize_function__RobotInfo_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotInfo_Event_message_members = {
  "interbotix_xs_msgs::srv",  // message namespace
  "RobotInfo_Event",  // message name
  3,  // number of fields
  sizeof(interbotix_xs_msgs::srv::RobotInfo_Event),
  false,  // has_any_key_member_
  RobotInfo_Event_message_member_array,  // message members
  RobotInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotInfo_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__srv__RobotInfo_Event__get_type_hash,
  &interbotix_xs_msgs__srv__RobotInfo_Event__get_type_description,
  &interbotix_xs_msgs__srv__RobotInfo_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::srv::RobotInfo_Event>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_introspection_cpp::RobotInfo_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, RobotInfo_Event)() {
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_introspection_cpp::RobotInfo_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RobotInfo_service_members = {
  "interbotix_xs_msgs::srv",  // service namespace
  "RobotInfo",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<interbotix_xs_msgs::srv::RobotInfo>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t RobotInfo_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotInfo_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interbotix_xs_msgs::srv::RobotInfo_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interbotix_xs_msgs::srv::RobotInfo_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interbotix_xs_msgs::srv::RobotInfo_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<interbotix_xs_msgs::srv::RobotInfo>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<interbotix_xs_msgs::srv::RobotInfo>,
  &interbotix_xs_msgs__srv__RobotInfo__get_type_hash,
  &interbotix_xs_msgs__srv__RobotInfo__get_type_description,
  &interbotix_xs_msgs__srv__RobotInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interbotix_xs_msgs::srv::RobotInfo>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::interbotix_xs_msgs::srv::rosidl_typesupport_introspection_cpp::RobotInfo_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interbotix_xs_msgs::srv::RobotInfo_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interbotix_xs_msgs::srv::RobotInfo_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interbotix_xs_msgs::srv::RobotInfo_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, RobotInfo)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<interbotix_xs_msgs::srv::RobotInfo>();
}

#ifdef __cplusplus
}
#endif
