#include <iostream>
using namespace std;

// Pass a copy of the value
float fahrenheitToCelsius(float temperature)
{
    // Compute a new value and return it
    return (5.0 / 9.0) * (temperature - 32.0);
}

int main()
{
    float temperature = 98;

    // Call the fahrenheitToCelsius to convert the temperature.
    temperature = fahrenheitToCelsius(temperature);

    return 0;
}



