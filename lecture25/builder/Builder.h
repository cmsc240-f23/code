#ifndef BUILDER_H
#define BUILDER_H

#include <string>

class Builder 
{
public:
    virtual void reset() = 0;
    virtual void setSeats(int number) = 0;
    virtual void setEngine(const std::string& type) = 0;
    virtual void setTripComputer(bool hasTripComputer) = 0;
    virtual void setGPS(bool hasGPS) = 0;
    virtual void setFourWheelDrive(bool hasFourWheelDrive) = 0;
};

#endif // BUILDER_H