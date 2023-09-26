#include "Engine.h"
#include "Radio.h"
#include "Tire.h"

class Car 
{
public:
    Car();
    void start();
    void stop();
    void inflateTire(int index, int psi);
private:
    // Car is composed of an Engine class, Radio class, and four Tire classes.
    Engine engine;
    Radio radio;
    Tire tires[4];
};
