#ifndef VEHICLE_TELEMETRY_TELEMETRY_TELEMETRY_DATA_H
#define VEHICLE_TELEMETRY_TELEMETRY_TELEMETRY_DATA_H

#include <cstdint>

namespace telemetry {

struct TelemetryData {
    uint32_t canId;
    int engineTemperature;

    double latitude;
    double longitude;
};

}  // namespace telemetry

#endif