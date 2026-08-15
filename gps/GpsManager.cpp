#include "gps/GpsManager.h"

#include "common/Logger.h"

namespace gps {

GpsManager::GpsManager()
    : latitude_(16.5062),
      longitude_(80.6480)
{
    common::Logger::info("GPS manager initialized");
}

GpsData GpsManager::readLocation()
{
    common::Logger::info("Reading GPS location");

    return GpsData(
        latitude_,
        longitude_
    );
}

}  // namespace gps