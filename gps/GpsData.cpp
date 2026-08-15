#include "gps/GpsData.h"

namespace gps {

GpsData::GpsData(double latitude, double longitude)
    : latitude_(latitude),
      longitude_(longitude)
{
}

double GpsData::latitude() const
{
    return latitude_;
}

double GpsData::longitude() const
{
    return longitude_;
}

}  // namespace gps