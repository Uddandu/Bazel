#ifndef VEHICLE_TELEMETRY_CAN_CAN_BUS_H
#define VEHICLE_TELEMETRY_CAN_CAN_BUS_H

#include "can/CanFrame.h"

namespace can {

class CanBus {
public:
    CanBus();

    CanFrame readFrame();

private:
    int counter_;
};

}  // namespace can

#endif