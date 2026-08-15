#include "telemetry/TelemetryProcessor.h"

#include "can/CanBus.h"
#include "gps/GpsManager.h"
#include "common/Logger.h"

namespace telemetry {

TelemetryProcessor::TelemetryProcessor()
{
    common::Logger::info("Telemetry processor initialized");
}

TelemetryData TelemetryProcessor::collect()
{
    can::CanBus canBus;
    gps::GpsManager gpsManager;

    can::CanFrame frame = canBus.readFrame();
    gps::GpsData location = gpsManager.readLocation();

    TelemetryData data;

    data.canId = frame.id();
    data.engineTemperature = processTemperature(frame.value());

    data.latitude = location.latitude();
    data.longitude = location.longitude();

    return data;
}

int TelemetryProcessor::processTemperature(int rawTemperature) const
{
    return rawTemperature;
}

}  // namespace telemetry