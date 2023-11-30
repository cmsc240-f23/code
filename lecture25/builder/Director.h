#include "Builder.h"

class Director 
{
public:
    void constructSportsCar(Builder& builder) 
    {
        builder.reset();
        builder.setSeats(2);
        builder.setEngine("Sport Engine");
        builder.setGPS(true);
    }

    void constructSUV(Builder& builder) 
    {
        builder.reset();
        builder.setSeats(5); // SUVs typically have more seats
        builder.setEngine("SUV Engine");
        builder.setTripComputer(true);
        builder.setGPS(true);
        builder.setFourWheelDrive(true);
    }
};
