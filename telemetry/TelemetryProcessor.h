#ifndef VEHICLE_TELEMETRY_TELEMETRY_TELEMETRY_PROCESSOR_H
#define VEHICLE_TELEMETRY_TELEMETRY_TELEMETRY_PROCESSOR_H

#include "telemetry/TelemetryData.h"

namespace telemetry {

class TelemetryProcessor {
public:
    TelemetryProcessor();

    TelemetryData collect();

private:
    int processTemperature(int rawTemperature) const;
};

}  // namespace telemetry

#endif