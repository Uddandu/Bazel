#include "network/NetworkClient.h"

#include "common/Logger.h"

namespace network {

NetworkClient::NetworkClient(
    const std::string& server,
    int port)
    : server_(server),
      port_(port)
{
}

bool NetworkClient::connect()
{
    common::Logger::info(
        "Connecting to " + server_
    );

    return true;
}

bool NetworkClient::send(const std::string& data)
{
    common::Logger::info(
        "Sending telemetry: " + data
    );

    return true;
}

}  // namespace network