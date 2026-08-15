#include "common/Logger.h"

#include <iostream>

namespace common {

void Logger::info(const std::string& message)
{
    std::cout << "[INFO] " << message << '\n';
}

void Logger::error(const std::string& message)
{
    std::cerr << "[ERROR] " << message << '\n';
}

}  // namespace common