#ifndef VEHICLE_TELEMETRY_CAN_CAN_FRAME_H
#define VEHICLE_TELEMETRY_CAN_CAN_FRAME_H

#include <cstdint>

namespace can {

class CanFrame {
public:
    CanFrame(uint32_t id, int value);

    uint32_t id() const;
    int value() const;

private:
    uint32_t id_;
    int value_;
};

}  // namespace can

#endif