#include "network/TelemetryUploader.h"

#include <sstream>

#include "common/Config.h"
#include "network/NetworkClient.h"

namespace network {

TelemetryUploader::TelemetryUploader()
{
}

bool TelemetryUploader::upload(
    const telemetry::TelemetryData& data)
{
    common::Config config;

    NetworkClient client(
        config.serverAddress(),
        config.serverPort()
    );

    if (!client.connect()) {
        return false;
    }

    std::ostringstream stream;

    stream
        << "CAN=" << data.canId
        << ",TEMP=" << data.engineTemperature
        << ",LAT=" << data.latitude
        << ",LON=" << data.longitude;

    return client.send(stream.str());
}

}  // namespace network