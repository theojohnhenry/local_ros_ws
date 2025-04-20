#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/add_three_ints.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;
using my_srv_file = tutorial_interfaces::srv::AddThreeInts;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 4) { //Vi behöver 3 argument eftersom det är /my program, arg 1, arg 2. ANnat ger 1 (error)
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "wrong usage");
      return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("control_node");
  rclcpp::Client<my_srv_file>::SharedPtr client =
    node->create_client<my_srv_file>("motor_service");

  auto request = std::make_shared<my_srv_file::Request>(); //Auto, den vet ej vad .srv ger
  request->a = atoll(argv[1]); //.srv är servicen strukturen av ditt meddelande
  request->b = atoll(argv[2]); //Atoll convertar string till int. 
  request->c = atoll(argv[3]); //Atoll convertar string till int. 

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again..."); //kolla på can stop i denna situation
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %ld", result.get()->sum);
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service motor_service");
  }

  rclcpp::shutdown();
  return 0;
}