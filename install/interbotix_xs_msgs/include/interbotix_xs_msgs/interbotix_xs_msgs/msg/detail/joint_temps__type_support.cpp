// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:msg/JointTemps.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interbotix_xs_msgs/msg/detail/joint_temps__functions.h"
#include "interbotix_xs_msgs/msg/detail/joint_temps__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interbotix_xs_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointTemps_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interbotix_xs_msgs::msg::JointTemps(_init);
}

void JointTemps_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interbotix_xs_msgs::msg::JointTemps *>(message_memory);
  typed_message->~JointTemps();
}

size_t size_function__JointTemps__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTemps__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTemps__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointTemps__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__JointTemps__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__JointTemps__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__JointTemps__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__JointTemps__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointTemps__temps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTemps__temps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTemps__temps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointTemps__temps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__JointTemps__temps(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__JointTemps__temps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__JointTemps__temps(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__JointTemps__temps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointTemps_message_member_array[2] = {
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::msg::JointTemps, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTemps__names,  // size() function pointer
    get_const_function__JointTemps__names,  // get_const(index) function pointer
    get_function__JointTemps__names,  // get(index) function pointer
    fetch_function__JointTemps__names,  // fetch(index, &value) function pointer
    assign_function__JointTemps__names,  // assign(index, value) function pointer
    resize_function__JointTemps__names  // resize(index) function pointer
  },
  {
    "temps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::msg::JointTemps, temps),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTemps__temps,  // size() function pointer
    get_const_function__JointTemps__temps,  // get_const(index) function pointer
    get_function__JointTemps__temps,  // get(index) function pointer
    fetch_function__JointTemps__temps,  // fetch(index, &value) function pointer
    assign_function__JointTemps__temps,  // assign(index, value) function pointer
    resize_function__JointTemps__temps  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointTemps_message_members = {
  "interbotix_xs_msgs::msg",  // message namespace
  "JointTemps",  // message name
  2,  // number of fields
  sizeof(interbotix_xs_msgs::msg::JointTemps),
  false,  // has_any_key_member_
  JointTemps_message_member_array,  // message members
  JointTemps_init_function,  // function to initialize message memory (memory has to be allocated)
  JointTemps_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointTemps_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointTemps_message_members,
  get_message_typesupport_handle_function,
  &interbotix_xs_msgs__msg__JointTemps__get_type_hash,
  &interbotix_xs_msgs__msg__JointTemps__get_type_description,
  &interbotix_xs_msgs__msg__JointTemps__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interbotix_xs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::msg::JointTemps>()
{
  return &::interbotix_xs_msgs::msg::rosidl_typesupport_introspection_cpp::JointTemps_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, msg, JointTemps)() {
  return &::interbotix_xs_msgs::msg::rosidl_typesupport_introspection_cpp::JointTemps_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
