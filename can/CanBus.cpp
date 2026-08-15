#include "can/CanBus.h"

#include "common/Logger.h"

namespace can {

CanBus::CanBus()
    : counter_(0)
{
    common::Logger::info("CAN bus initialized");
}

CanFrame CanBus::readFrame()
{
    ++counter_;

    common::Logger::info("Reading CAN frame");

    return CanFrame(
        0x100,
        50 + counter_
    );
}

}  // namespace can