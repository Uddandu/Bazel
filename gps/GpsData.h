#ifndef VEHICLE_TELEMETRY_GPS_GPS_DATA_H
#define VEHICLE_TELEMETRY_GPS_GPS_DATA_H

namespace gps {

class GpsData {
public:
    GpsData(double latitude, double longitude);

    double latitude() const;
    double longitude() const;

private:
    double latitude_;
    double longitude_;
};

}  // namespace gps

#endif