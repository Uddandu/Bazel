#ifndef VEHICLE_TELEMETRY_COMMON_CONFIG_H
#define VEHICLE_TELEMETRY_COMMON_CONFIG_H

#include <string>

namespace common {

class Config {
public:
    Config();

    const std::string& serverAddress() const;
    int serverPort() const;

private:
    std::string serverAddress_;
    int serverPort_;
};

}  // namespace common

#endif