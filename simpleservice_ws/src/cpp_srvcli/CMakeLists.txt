cmake_minimum_required(VERSION 3.8)
project(cpp_srvcli)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tutorial_interfaces REQUIRED)         # CHANGE
find_package(rosidl_default_generators REQUIRED)

add_executable(server src/motor_node.cpp src/MotorController.cpp)
ament_target_dependencies(server rclcpp tutorial_interfaces)


add_executable(client src/control_node.cpp)
ament_target_dependencies(client rclcpp tutorial_interfaces)

install(TARGETS
    server
    client
  DESTINATION lib/${PROJECT_NAME})

ament_export_dependencies(rosidl_default_runtime)
#include "example_interfaces/srv/add_three_ints.hpp"

ament_package()