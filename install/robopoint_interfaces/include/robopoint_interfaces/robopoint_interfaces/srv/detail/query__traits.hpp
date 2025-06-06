// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robopoint_interfaces:srv/Query.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robopoint_interfaces/srv/query.hpp"


#ifndef ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__TRAITS_HPP_
#define ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robopoint_interfaces/srv/detail/query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robopoint_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Query_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: query
  {
    out << "query: ";
    rosidl_generator_traits::value_to_yaml(msg.query, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Query_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: query
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query: ";
    rosidl_generator_traits::value_to_yaml(msg.query, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Query_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robopoint_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robopoint_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robopoint_interfaces::srv::Query_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robopoint_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robopoint_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robopoint_interfaces::srv::Query_Request & msg)
{
  return robopoint_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robopoint_interfaces::srv::Query_Request>()
{
  return "robopoint_interfaces::srv::Query_Request";
}

template<>
inline const char * name<robopoint_interfaces::srv::Query_Request>()
{
  return "robopoint_interfaces/srv/Query_Request";
}

template<>
struct has_fixed_size<robopoint_interfaces::srv::Query_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robopoint_interfaces::srv::Query_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robopoint_interfaces::srv::Query_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robopoint_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Query_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Query_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Query_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robopoint_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robopoint_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robopoint_interfaces::srv::Query_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robopoint_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robopoint_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robopoint_interfaces::srv::Query_Response & msg)
{
  return robopoint_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robopoint_interfaces::srv::Query_Response>()
{
  return "robopoint_interfaces::srv::Query_Response";
}

template<>
inline const char * name<robopoint_interfaces::srv::Query_Response>()
{
  return "robopoint_interfaces/srv/Query_Response";
}

template<>
struct has_fixed_size<robopoint_interfaces::srv::Query_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robopoint_interfaces::srv::Query_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robopoint_interfaces::srv::Query_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robopoint_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Query_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Query_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Query_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robopoint_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robopoint_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robopoint_interfaces::srv::Query_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robopoint_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robopoint_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robopoint_interfaces::srv::Query_Event & msg)
{
  return robopoint_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robopoint_interfaces::srv::Query_Event>()
{
  return "robopoint_interfaces::srv::Query_Event";
}

template<>
inline const char * name<robopoint_interfaces::srv::Query_Event>()
{
  return "robopoint_interfaces/srv/Query_Event";
}

template<>
struct has_fixed_size<robopoint_interfaces::srv::Query_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robopoint_interfaces::srv::Query_Event>
  : std::integral_constant<bool, has_bounded_size<robopoint_interfaces::srv::Query_Request>::value && has_bounded_size<robopoint_interfaces::srv::Query_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robopoint_interfaces::srv::Query_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robopoint_interfaces::srv::Query>()
{
  return "robopoint_interfaces::srv::Query";
}

template<>
inline const char * name<robopoint_interfaces::srv::Query>()
{
  return "robopoint_interfaces/srv/Query";
}

template<>
struct has_fixed_size<robopoint_interfaces::srv::Query>
  : std::integral_constant<
    bool,
    has_fixed_size<robopoint_interfaces::srv::Query_Request>::value &&
    has_fixed_size<robopoint_interfaces::srv::Query_Response>::value
  >
{
};

template<>
struct has_bounded_size<robopoint_interfaces::srv::Query>
  : std::integral_constant<
    bool,
    has_bounded_size<robopoint_interfaces::srv::Query_Request>::value &&
    has_bounded_size<robopoint_interfaces::srv::Query_Response>::value
  >
{
};

template<>
struct is_service<robopoint_interfaces::srv::Query>
  : std::true_type
{
};

template<>
struct is_service_request<robopoint_interfaces::srv::Query_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robopoint_interfaces::srv::Query_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOPOINT_INTERFACES__SRV__DETAIL__QUERY__TRAITS_HPP_
