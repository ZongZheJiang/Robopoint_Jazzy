// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:srv/Reboot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interbotix_xs_msgs/srv/reboot.hpp"


#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__REBOOT__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__REBOOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interbotix_xs_msgs/srv/detail/reboot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_Reboot_Request_smart_reboot
{
public:
  explicit Init_Reboot_Request_smart_reboot(::interbotix_xs_msgs::srv::Reboot_Request & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::Reboot_Request smart_reboot(::interbotix_xs_msgs::srv::Reboot_Request::_smart_reboot_type arg)
  {
    msg_.smart_reboot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::Reboot_Request msg_;
};

class Init_Reboot_Request_enable
{
public:
  explicit Init_Reboot_Request_enable(::interbotix_xs_msgs::srv::Reboot_Request & msg)
  : msg_(msg)
  {}
  Init_Reboot_Request_smart_reboot enable(::interbotix_xs_msgs::srv::Reboot_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_Reboot_Request_smart_reboot(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::Reboot_Request msg_;
};

class Init_Reboot_Request_name
{
public:
  explicit Init_Reboot_Request_name(::interbotix_xs_msgs::srv::Reboot_Request & msg)
  : msg_(msg)
  {}
  Init_Reboot_Request_enable name(::interbotix_xs_msgs::srv::Reboot_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Reboot_Request_enable(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::Reboot_Request msg_;
};

class Init_Reboot_Request_cmd_type
{
public:
  Init_Reboot_Request_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reboot_Request_name cmd_type(::interbotix_xs_msgs::srv::Reboot_Request::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_Reboot_Request_name(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::Reboot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::Reboot_Request>()
{
  return interbotix_xs_msgs::srv::builder::Init_Reboot_Request_cmd_type();
}

}  // namespace interbotix_xs_msgs


namespace interbotix_xs_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::Reboot_Response>()
{
  return ::interbotix_xs_msgs::srv::Reboot_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interbotix_xs_msgs


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_Reboot_Event_response
{
public:
  explicit Init_Reboot_Event_response(::interbotix_xs_msgs::srv::Reboot_Event & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::Reboot_Event response(::interbotix_xs_msgs::srv::Reboot_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::Reboot_Event msg_;
};

class Init_Reboot_Event_request
{
public:
  explicit Init_Reboot_Event_request(::interbotix_xs_msgs::srv::Reboot_Event & msg)
  : msg_(msg)
  {}
  Init_Reboot_Event_response request(::interbotix_xs_msgs::srv::Reboot_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Reboot_Event_response(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::Reboot_Event msg_;
};

class Init_Reboot_Event_info
{
public:
  Init_Reboot_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reboot_Event_request info(::interbotix_xs_msgs::srv::Reboot_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Reboot_Event_request(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::Reboot_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::Reboot_Event>()
{
  return interbotix_xs_msgs::srv::builder::Init_Reboot_Event_info();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__REBOOT__BUILDER_HPP_
