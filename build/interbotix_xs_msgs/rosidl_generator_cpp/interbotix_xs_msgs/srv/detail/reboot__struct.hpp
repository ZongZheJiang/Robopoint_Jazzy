// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_xs_msgs:srv/Reboot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interbotix_xs_msgs/srv/reboot.hpp"


#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__REBOOT__STRUCT_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__REBOOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__srv__Reboot_Request __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__srv__Reboot_Request __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reboot_Request_
{
  using Type = Reboot_Request_<ContainerAllocator>;

  explicit Reboot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = "";
      this->name = "";
      this->enable = false;
      this->smart_reboot = false;
    }
  }

  explicit Reboot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_type(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = "";
      this->name = "";
      this->enable = false;
      this->smart_reboot = false;
    }
  }

  // field types and members
  using _cmd_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_type_type cmd_type;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _enable_type =
    bool;
  _enable_type enable;
  using _smart_reboot_type =
    bool;
  _smart_reboot_type smart_reboot;

  // setters for named parameter idiom
  Type & set__cmd_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd_type = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__smart_reboot(
    const bool & _arg)
  {
    this->smart_reboot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__srv__Reboot_Request
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__srv__Reboot_Request
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reboot_Request_ & other) const
  {
    if (this->cmd_type != other.cmd_type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    if (this->smart_reboot != other.smart_reboot) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reboot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reboot_Request_

// alias to use template instance with default allocator
using Reboot_Request =
  interbotix_xs_msgs::srv::Reboot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_xs_msgs


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__srv__Reboot_Response __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__srv__Reboot_Response __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reboot_Response_
{
  using Type = Reboot_Response_<ContainerAllocator>;

  explicit Reboot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Reboot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__srv__Reboot_Response
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__srv__Reboot_Response
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reboot_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reboot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reboot_Response_

// alias to use template instance with default allocator
using Reboot_Response =
  interbotix_xs_msgs::srv::Reboot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_xs_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__srv__Reboot_Event __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__srv__Reboot_Event __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reboot_Event_
{
  using Type = Reboot_Event_<ContainerAllocator>;

  explicit Reboot_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Reboot_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interbotix_xs_msgs::srv::Reboot_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interbotix_xs_msgs::srv::Reboot_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__srv__Reboot_Event
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__srv__Reboot_Event
    std::shared_ptr<interbotix_xs_msgs::srv::Reboot_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reboot_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reboot_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reboot_Event_

// alias to use template instance with default allocator
using Reboot_Event =
  interbotix_xs_msgs::srv::Reboot_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace interbotix_xs_msgs
{

namespace srv
{

struct Reboot
{
  using Request = interbotix_xs_msgs::srv::Reboot_Request;
  using Response = interbotix_xs_msgs::srv::Reboot_Response;
  using Event = interbotix_xs_msgs::srv::Reboot_Event;
};

}  // namespace srv

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__REBOOT__STRUCT_HPP_
