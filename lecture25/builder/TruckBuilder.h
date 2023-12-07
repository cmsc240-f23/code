#ifndef CAR_BUILDER_H
#define CAR_BUILDER_H

#include "Builder.h"
#include "Car.h"

class TruckBuilder : public Builder 
{
public:
    void reset() 
    {
        // Reset the Car object to its default state
        truck = Truck(); 
    }

    void setSeats(int number) { car.seats = number; }
    void setEngine(const std::string& type) { car.engine = type; }
    void setTripComputer(bool hasTripComputer) { car.hasTripComputer = hasTripComputer; }
    void setGPS(bool hasGPS) { car.hasGPS = hasGPS; }
    void setFourWheelDrive(bool hasFourWheelDrive) { car.hasFourWheelDrive = hasFourWheelDrive; }

    Car getResult() 
    {
        // Return a copy of the built car
        Car result = car; 
        this->reset();
        return result;
    }
private:
    Car car;    
};

#endif // CAR_BUILDER_H
