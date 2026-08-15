#ifndef VEHICLE_TELEMETRY_NETWORK_TELEMETRY_UPLOADER_H
#define VEHICLE_TELEMETRY_NETWORK_TELEMETRY_UPLOADER_H

#include "telemetry/TelemetryData.h"

namespace network {

class TelemetryUploader {
public:
    TelemetryUploader();

    bool upload(
        const telemetry::TelemetryData& data
    );
};

}  // namespace network

#endif