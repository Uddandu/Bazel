#include "can/CanFrame.h"

namespace can {

CanFrame::CanFrame(uint32_t id, int value)
    : id_(id),
      value_(value)
{
}

uint32_t CanFrame::id() const
{
    return id_;
}

int CanFrame::value() const
{
    return value_;
}

}  // namespace can