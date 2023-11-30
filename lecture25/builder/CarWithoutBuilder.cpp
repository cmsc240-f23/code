#include <string>
#include <iostream>

class Car 
{
public:
    // Complex constructor
    Car(int seats, const std::string& engine, bool hasTripComputer, bool hasGPS, bool hasFourWheelDrive) 
        : seats(seats), engine(engine), hasTripComputer(hasTripComputer), hasGPS(hasGPS), hasFourWheelDrive(hasFourWheelDrive) {}

    int seats;
    std::string engine;
    bool hasTripComputer;
    bool hasGPS;
    bool hasFourWheelDrive;
};

int main() 
{
    
    Car sportsCar(2, "V6 Engine", true, false, false);

    Car sportsUtilityVehicle(5, "V8 Engine", true, true, true);

    return 0;
}
