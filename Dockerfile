FROM ros:jazzy-ros-base

# Install system dependencies
RUN apt-get update && apt-get install -y \
    python3-colcon-common-extensions \
    ros-jazzy-desktop \
    ros-jazzy-rclcpp \
    can-utils \
    && rm -rf /var/lib/apt/lists/*

# Set up ROS 2 environment
SHELL ["/bin/bash", "-c"]
RUN echo "source /opt/ros/jazzy/setup.bash" >> ~/.bashrc
WORKDIR /ros2_ws