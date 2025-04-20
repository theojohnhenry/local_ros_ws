// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/SpeedControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_interfaces/srv/speed_control.hpp"


#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SPEED_CONTROL__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SPEED_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/speed_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpeedControl_Request_speed_control
{
public:
  Init_SpeedControl_Request_speed_control()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::SpeedControl_Request speed_control(::tutorial_interfaces::srv::SpeedControl_Request::_speed_control_type arg)
  {
    msg_.speed_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SpeedControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SpeedControl_Request>()
{
  return tutorial_interfaces::srv::builder::Init_SpeedControl_Request_speed_control();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpeedControl_Response_angle
{
public:
  explicit Init_SpeedControl_Response_angle(::tutorial_interfaces::srv::SpeedControl_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::SpeedControl_Response angle(::tutorial_interfaces::srv::SpeedControl_Response::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SpeedControl_Response msg_;
};

class Init_SpeedControl_Response_speed
{
public:
  explicit Init_SpeedControl_Response_speed(::tutorial_interfaces::srv::SpeedControl_Response & msg)
  : msg_(msg)
  {}
  Init_SpeedControl_Response_angle speed(::tutorial_interfaces::srv::SpeedControl_Response::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SpeedControl_Response_angle(msg_);
  }

private:
  ::tutorial_interfaces::srv::SpeedControl_Response msg_;
};

class Init_SpeedControl_Response_torque_current
{
public:
  explicit Init_SpeedControl_Response_torque_current(::tutorial_interfaces::srv::SpeedControl_Response & msg)
  : msg_(msg)
  {}
  Init_SpeedControl_Response_speed torque_current(::tutorial_interfaces::srv::SpeedControl_Response::_torque_current_type arg)
  {
    msg_.torque_current = std::move(arg);
    return Init_SpeedControl_Response_speed(msg_);
  }

private:
  ::tutorial_interfaces::srv::SpeedControl_Response msg_;
};

class Init_SpeedControl_Response_temperature
{
public:
  Init_SpeedControl_Response_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedControl_Response_torque_current temperature(::tutorial_interfaces::srv::SpeedControl_Response::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_SpeedControl_Response_torque_current(msg_);
  }

private:
  ::tutorial_interfaces::srv::SpeedControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SpeedControl_Response>()
{
  return tutorial_interfaces::srv::builder::Init_SpeedControl_Response_temperature();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpeedControl_Event_response
{
public:
  explicit Init_SpeedControl_Event_response(::tutorial_interfaces::srv::SpeedControl_Event & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::SpeedControl_Event response(::tutorial_interfaces::srv::SpeedControl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SpeedControl_Event msg_;
};

class Init_SpeedControl_Event_request
{
public:
  explicit Init_SpeedControl_Event_request(::tutorial_interfaces::srv::SpeedControl_Event & msg)
  : msg_(msg)
  {}
  Init_SpeedControl_Event_response request(::tutorial_interfaces::srv::SpeedControl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SpeedControl_Event_response(msg_);
  }

private:
  ::tutorial_interfaces::srv::SpeedControl_Event msg_;
};

class Init_SpeedControl_Event_info
{
public:
  Init_SpeedControl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedControl_Event_request info(::tutorial_interfaces::srv::SpeedControl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SpeedControl_Event_request(msg_);
  }

private:
  ::tutorial_interfaces::srv::SpeedControl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SpeedControl_Event>()
{
  return tutorial_interfaces::srv::builder::Init_SpeedControl_Event_info();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SPEED_CONTROL__BUILDER_HPP_
