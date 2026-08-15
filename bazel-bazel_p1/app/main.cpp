#include "common/Logger.h"
#include "network/TelemetryUploader.h"
#include "telemetry/TelemetryProcessor.h"

int main()
{
    common::Logger::info(
        "Vehicle Telemetry Application Started"
    );

    telemetry::TelemetryProcessor processor;

    telemetry::TelemetryData data =
        processor.collect();

    network::TelemetryUploader uploader;

    if (!uploader.upload(data)) {
        common::Logger::error(
            "Telemetry upload failed"
        );

        return 1;
    }

    common::Logger::info(
        "Telemetry upload successful"
    );

    return 0;
}