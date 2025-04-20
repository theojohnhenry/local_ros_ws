#include "MotorController.hpp"
#include <iostream>
#include <cstring>
#include <sys/types.h>
#include <sys/socket.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <unistd.h>
#include <cstdint>

///Constructor
MotorController::MotorController() {
    std::cout << "MotorController constructed, can socket open" << std::endl;
    can_socket_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (can_socket_ < 0) {
        std::cerr << "Error opening CAN socket" << std::endl;
        return;
    }
    struct ifreq ifr;
    std::strcpy(ifr.ifr_name, "can0"); // ai generated code: use can0 interface
    if (ioctl(can_socket_, SIOCGIFINDEX, &ifr) < 0) {
        std::cerr << "Error getting CAN interface index" << std::endl;
        close(can_socket_);
        can_socket_ = -1;
        return;
    }
    struct sockaddr_can addr;
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    if (bind(can_socket_, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        std::cerr << "Error binding CAN socket" << std::endl;
        close(can_socket_);
        can_socket_ = -1;
        return;
    }
    std::cout << "CAN socket initialized on can0" << std::endl;
}

/// Destructor
MotorController::~MotorController() {
    std::cout << "MotorController destructed, can socket closed" << std::endl;
    // ai generated code: close CAN socket if open
    if (can_socket_ >= 0) {
        close(can_socket_);
        std::cout << "CAN socket closed" << std::endl;
    }
}

// method
void MotorController::send_speed_command(int speed) {
    std::cout << "Sending speed command: " << speed << std::endl;
    struct can_frame frame = encode_speed_command(speed);
    // ai generated code: send frame over CAN socket
    if (can_socket_ < 0) {
        std::cerr << "CAN socket not initialized" << std::endl;
        return;
    }
    int nbytes = write(can_socket_, &frame, sizeof(frame));
    if (nbytes != sizeof(frame)) {
        std::cerr << "Error sending CAN frame" << std::endl;
    } else {
        std::cout << "CAN frame sent" << std::endl;
    }
}

//method
struct can_frame MotorController::recieve_ack() {
    std::cout << "Receiving CAN ack..." << std::endl;
    struct can_frame frame;
    std::memset(&frame, 0, sizeof(frame));
    // ai generated code: read frame from CAN socket
    if (can_socket_ < 0) {
        std::cerr << "CAN socket not initialized" << std::endl;
        return frame;
    }
    int nbytes = read(can_socket_, &frame, sizeof(frame));
    if (nbytes < 0) {
        std::cerr << "Error reading CAN frame" << std::endl;
    } else if (nbytes < sizeof(frame)) {
        std::cerr << "Incomplete CAN frame received" << std::endl;
    } else {
        std::cout << "CAN frame received" << std::endl;
    }
    return frame;
}

struct can_frame MotorController::encode_speed_command(int32_t speed) {
    struct can_frame frame;
    std::memset(&frame, 0, sizeof(frame));
    frame.can_id = 0x141; // Command ID for sending
    frame.can_dlc = 8;
    frame.data[0] = 0xA2; // Command byte
    frame.data[1] = 0x00;
    frame.data[2] = 0x00;
    frame.data[3] = 0x00;
    frame.data[4] = static_cast<uint8_t>(speed & 0xFF);
    frame.data[5] = static_cast<uint8_t>((speed >> 8) & 0xFF);
    frame.data[6] = static_cast<uint8_t>((speed >> 16) & 0xFF);
    frame.data[7] = static_cast<uint8_t>((speed >> 24) & 0xFF);
    return frame;
}

SpeedControlResult MotorController::decode_ack(const struct can_frame& frame) {
    SpeedControlResult result;
    // Protocol: see user prompt for details
    // Data[0] = 0xA2 (command byte)
    // Data[1] = temperature (int8_t)
    // Data[2,3] = iq (int16_t, little endian)
    // Data[4,5] = speed (int16_t, little endian)
    // Data[6,7] = angle (int16_t, little endian)
    result.angle = static_cast<int16_t>((frame.data[7] << 8) | frame.data[6]);
    result.speed = static_cast<int16_t>((frame.data[5] << 8) | frame.data[4]);
    result.torque_current = static_cast<int16_t>((frame.data[3] << 8) | frame.data[2]) * 0.01f;
    result.temperature = static_cast<int8_t>(frame.data[1]);
    return result;
}