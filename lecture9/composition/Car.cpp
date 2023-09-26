#include "Car.h"

Car::Car() : 
    // Initialize engine with 256 horsepower
    engine(256),
    // Initialize all tires with a diameter of 19 inches               
    tires{ Tire(19), Tire(19), Tire(19), Tire(19) }, 
    // Initialize radio with volume level 11
    radio(11)                  
{ }

void Car::start() 
{
    engine.start();
    radio.switchOn();
}

void Car::stop() 
{
    engine.stop();
    radio.switchOff();
}

void Car::inflateTire(int index, int psi) 
{
    if (index >= 0 && index < 4) 
    {
        tires[index].inflate(psi);
    }
}

int main() 
{
    Car jeepWrangler;

    jeepWrangler.start();

    // ...
    
    jeepWrangler.stop();

    return 0;
}