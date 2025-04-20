// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/StopMotor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_interfaces/srv/stop_motor.hpp"


#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__STOP_MOTOR__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__STOP_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/stop_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::StopMotor_Request>()
{
  return ::tutorial_interfaces::srv::StopMotor_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::StopMotor_Response>()
{
  return ::tutorial_interfaces::srv::StopMotor_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_StopMotor_Event_response
{
public:
  explicit Init_StopMotor_Event_response(::tutorial_interfaces::srv::StopMotor_Event & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::StopMotor_Event response(::tutorial_interfaces::srv::StopMotor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::StopMotor_Event msg_;
};

class Init_StopMotor_Event_request
{
public:
  explicit Init_StopMotor_Event_request(::tutorial_interfaces::srv::StopMotor_Event & msg)
  : msg_(msg)
  {}
  Init_StopMotor_Event_response request(::tutorial_interfaces::srv::StopMotor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StopMotor_Event_response(msg_);
  }

private:
  ::tutorial_interfaces::srv::StopMotor_Event msg_;
};

class Init_StopMotor_Event_info
{
public:
  Init_StopMotor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopMotor_Event_request info(::tutorial_interfaces::srv::StopMotor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StopMotor_Event_request(msg_);
  }

private:
  ::tutorial_interfaces::srv::StopMotor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::StopMotor_Event>()
{
  return tutorial_interfaces::srv::builder::Init_StopMotor_Event_info();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__STOP_MOTOR__BUILDER_HPP_
