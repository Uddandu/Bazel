#include "common/Config.h"

namespace common {

Config::Config()
    : serverAddress_("127.0.0.1"),
      serverPort_(8080)
{
}

const std::string& Config::serverAddress() const
{
    return serverAddress_;
}

int Config::serverPort() const
{
    return serverPort_;
}

}  // namespace common