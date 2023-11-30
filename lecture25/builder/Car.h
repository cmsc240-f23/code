#ifndef CAR_H
#define CAR_H

#include <string>

class Car 
{
public:
    int seats;
    std::string engine;
    bool hasTripComputer;
    bool hasGPS;
    bool hasFourWheelDrive;

    // Friend declaration for the << operator overload
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

// Overload the << operator
std::ostream& operator<<(std::ostream& os, const Car& car) 
{
    os << "Car Specifications:" << std::endl
       << "Seats: " << car.seats << std::endl
       << "Engine: " << car.engine << std::endl
       << "Trip Computer: " << (car.hasTripComputer ? "Yes" : "No") << std::endl
       << "GPS: " << (car.hasGPS ? "Yes" : "No") << std::endl
       << "Four Wheel Drive: " << (car.hasFourWheelDrive ? "Yes" : "No");
    return os;
}

#endif // CAR_H
