#ifndef OBJECT_ADAPTER_H
#define OBJECT_ADAPTER_H

#include "MetricUtility.h"

class ObjectAdapter : public ImperialInterface 
{
public:
    double getTemperatureInFahrenheit() const 
    {
        return metricUtility.getTemperatureInCelsius() * 9.0 / 5.0 + 32.0;
    }
private:
    MetricUtility metricUtility;
};

#endif // OBJECT_ADAPTER_H