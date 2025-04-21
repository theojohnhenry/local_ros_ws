#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/speed_control.hpp"
#include "tutorial_interfaces/srv/stop_motor.hpp"
#include "MotorController.hpp"

// auto frame = motor_controller.recieve_ack();
// auto result = motor_controller.decode_ack(frame);
// auto result = motor_controller.decode_ack(frame);

// response->angle = result.angle;
// response->speed = result.speed;
// response->torque_current = result.torque_current;
// response->temperature = result.temperature;

#include <memory>

// using my_srv_file = tutorial_interfaces::srv::AddThreeInts;

using speed_srv = tutorial_interfaces::srv::SpeedControl;
using stop_srv = tutorial_interfaces::srv::StopMotor;

// void add(const std::shared_ptr<my_srv_file::Request> request, //request = (är en Ptr). Request->a är som att du pointar på a variabeln/whatever. 
//     std::shared_ptr<my_srv_file::Response>          response) //my_dog->bark() är samma som (*my_dog).bark(); (* dereferencar adressen, dvs ger dig vad som står på referensen)
// {                                                                                     //tsk från int*Ptr =, skapar en pointer som pekar på ett heltal 
//     response->sum = request->a + request->b + request->c;
//     RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\n a: %ld" " b: %ld" " c: %ld", request->a, request->b, request->c); //Vi referencar en variabel som inte finns än, men vi vet att den ska använda sig av a varren.
//     RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
// }                                                                                                             //Denna funktionen a+b=sum
MotorController motor_controller;

void handle_speed_control(
    const std::shared_ptr<speed_srv::Request> request,
    std::shared_ptr<speed_srv::Response> response)
    {
        motor_controller.send_speed_command(request->speed_control);
        auto frame = motor_controller.recieve_ack();
        auto result = motor_controller.decode_ack(frame);
       
        response->angle = result.angle;
        response->speed = result.speed;
        response->torque_current = result.torque_current;
        response->temperature = result.temperature;
    }


int main(int argc, char **argv) //int argc är typ antalet eller len(argv), argv är en vektor med alla argument  
{                               //**används bara för att det är en vektor. Första * menar att hela vektorn är fylld av pointers. den andra "*" gör att pointers kan peka till strängen/inten
    rclcpp::init(argc, argv);   //init startar ros, nu kan den lyssna efter enbart argc och argv, den behöver inte parsea

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("motor_node"); //Vi gör en pointer som pekar på en ROS2 node. Denna döps till node.; och döps till "motor_node"
                                                                                            //Shared pointer: Tänk en dagisleksak, alla kan leka. Leker ingen så läggs den på hyllan AUTOMATISKT (Frigör memory)
    // rclcpp::Service<my_srv_file>::SharedPtr service = //En shared pointer som heter service pekar på en rclcpp service, följer addTwoInts-mallen.
    //   node->create_service<my_srv_file>("motor_service", &add); //Den tar node som är en shared pointer

    rclcpp::Service<speed_srv>::SharedPtr service = node->create_service<speed_srv>("motor_speed_service", handle_speed_control);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "rdy to send motor cmd");                

    rclcpp::spin(node); //Spin är att noden hålls öppen. Det är en oändlig loop som väntar på inkommande instruktioner. Huvudtråden ligger i spin och returnerar först när du stänger av ros.
    rclcpp::shutdown(); //När spin väl returnerat (= du bett ROS om att sluta) behöver du städa upp globala resurser, DDS-anslutningar som ros dragit igång
}
//Tänk server noden som kårservice snubben. Han är expert på i detta fall summan= a+b. Han väntar ivrigt på att någon (en client nod) ska komma och göra en request (fråga vad 2+4 är).
//Servicen (hans disk) sitter ihop med honom. och det är möjligt att han inte får några kunder. 


