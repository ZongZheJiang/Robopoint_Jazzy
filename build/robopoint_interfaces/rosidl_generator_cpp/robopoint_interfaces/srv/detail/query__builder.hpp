// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robopoint_interfaces:srv/Query.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robopoint_interfaces/srv/query.hpp"


#ifndef ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__BUILDER_HPP_
#define ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robopoint_interfaces/srv/detail/query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robopoint_interfaces
{

namespace srv
{

namespace builder
{

class Init_Query_Request_query
{
public:
  Init_Query_Request_query()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robopoint_interfaces::srv::Query_Request query(::robopoint_interfaces::srv::Query_Request::_query_type arg)
  {
    msg_.query = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robopoint_interfaces::srv::Query_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robopoint_interfaces::srv::Query_Request>()
{
  return robopoint_interfaces::srv::builder::Init_Query_Request_query();
}

}  // namespace robopoint_interfaces


namespace robopoint_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robopoint_interfaces::srv::Query_Response>()
{
  return ::robopoint_interfaces::srv::Query_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robopoint_interfaces


namespace robopoint_interfaces
{

namespace srv
{

namespace builder
{

class Init_Query_Event_response
{
public:
  explicit Init_Query_Event_response(::robopoint_interfaces::srv::Query_Event & msg)
  : msg_(msg)
  {}
  ::robopoint_interfaces::srv::Query_Event response(::robopoint_interfaces::srv::Query_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robopoint_interfaces::srv::Query_Event msg_;
};

class Init_Query_Event_request
{
public:
  explicit Init_Query_Event_request(::robopoint_interfaces::srv::Query_Event & msg)
  : msg_(msg)
  {}
  Init_Query_Event_response request(::robopoint_interfaces::srv::Query_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Query_Event_response(msg_);
  }

private:
  ::robopoint_interfaces::srv::Query_Event msg_;
};

class Init_Query_Event_info
{
public:
  Init_Query_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Query_Event_request info(::robopoint_interfaces::srv::Query_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Query_Event_request(msg_);
  }

private:
  ::robopoint_interfaces::srv::Query_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robopoint_interfaces::srv::Query_Event>()
{
  return robopoint_interfaces::srv::builder::Init_Query_Event_info();
}

}  // namespace robopoint_interfaces

#endif  // ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__BUILDER_HPP_
