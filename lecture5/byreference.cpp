#include <iostream>
using namespace std;

// Pass a reference
void fahrenheitToCelsius(float& temperature)
{
    // Compute the value directly using the alternate name
    temperature = (5.0 / 9.0) * (temperature - 32.0);
}

int main()
{
    float temperature = 98;

    // Call the fahrenheitToCelsius to convert the temperature.
    fahrenheitToCelsius(temperature);

    return 0;
}



