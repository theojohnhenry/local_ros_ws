#include "tutorial_interfaces/srv/stop_motor.hpp"
#include "tutorial_interfaces/srv/speed_control.hpp"
#include "rclcpp/rclcpp.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>
#include <termios.h>
#include <unistd.h>

using namespace std::chrono_literals;

using speed_srv = tutorial_interfaces::srv::SpeedControl;
using stop_srv = tutorial_interfaces::srv::StopMotor;
//helt retarded standard kod f;r att detecta inputs i terminalen... 
int getch(){
  struct termios oldt, newt;
  int ch;
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  ch = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  return ch;
}

void send_speed_command(
  const std::shared_ptr<rclcpp::Node>& node,
  const rclcpp::Client<speed_srv>::SharedPtr& client,
  int speed)
{
  auto request = std::make_shared<speed_srv::Request>();
  request->speed = speed_control; // Adjust field name if needed

  auto result = client->async_send_request(request);
  if (rclcpp::spin_until_future_complete(node, result) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    auto res = result.get();
    printf("Response: angle=%.2f, speed=%.2f, torque_current=%.2f, temperature=%.2f\n",
      res->angle, res->speed, res->torque_current, res->temperature);
  } else {
    printf("Failed to call service\n");
  }
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("control_node");
  rclcpp::Client<speed_srv>::SharedPtr client =
    node->create_client<speed_srv>("motor_speed_service");

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again..."); //kolla på can stop i denna situation
  }

  printf("Press 'd' for positive speed, 'a' for negative speed, 'q' to quit...\n");
  while (rclcpp::ok()) {
    int c = getch();
    int speed = 0;
    if (c == 'd') {
      speed = 10; // positive speed
    } else if (c == 'a') {
      speed = -10; // negative speed
    } else if (c == 'q') {
      break;
    } else {
      continue;
    }
    send_speed_command(node, client, speed);
  }

  rclcpp::shutdown();
  return 0;
}