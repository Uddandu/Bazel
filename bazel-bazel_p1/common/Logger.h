#ifndef VEHICLE_TELEMETRY_COMMON_LOGGER_H
#define VEHICLE_TELEMETRY_COMMON_LOGGER_H

#include <string>

namespace common {

class Logger {
public:
    static void info(const std::string& message);
    static void error(const std::string& message);
};

}  // namespace common

#endif