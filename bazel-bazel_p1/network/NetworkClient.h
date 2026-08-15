#ifndef VEHICLE_TELEMETRY_NETWORK_NETWORK_CLIENT_H
#define VEHICLE_TELEMETRY_NETWORK_NETWORK_CLIENT_H

#include <string>

namespace network {

class NetworkClient {
public:
    NetworkClient(
        const std::string& server,
        int port
    );

    bool connect();
    bool send(const std::string& data);

private:
    std::string server_;
    int port_;
};

}  // namespace network

#endif