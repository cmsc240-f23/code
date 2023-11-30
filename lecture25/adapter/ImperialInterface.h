#ifndef IMPERIAL_INTERFACE_H
#define IMPERIAL_INTERFACE_H

// Target Interface

class ImperialInterface 
{
public:
    virtual double getTemperatureInFahrenheit() const = 0;
};

#endif // 