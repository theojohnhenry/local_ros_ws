#pragma once

struct SpeedControlResult {
    float angle;
    float speed;
    float torque_current;
    float temperature;
};

class MotorController{
public:
    MotorController();
    ~MotorController();

    void send_speed_command(int speed);
    struct can_frame recieve_ack();

private:
    int can_socket_; // CAN socket file descriptor
    struct can_frame encode_speed_command(int speed);
    SpeedControlResult decode_ack(const struct can_frame& frame);

};