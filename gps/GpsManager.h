#ifndef VEHICLE_TELEMETRY_GPS_GPS_MANAGER_H
#define VEHICLE_TELEMETRY_GPS_GPS_MANAGER_H

#include "gps/GpsData.h"

namespace gps {

class GpsManager {
public:
    GpsManager();

    GpsData readLocation();

private:
    double latitude_;
    double longitude_;
};

}  // namespace gps

#endif