#include <iostream>
using namespace std;

// Pass a pointer
void fahrenheitToCelsius(float* temperature)
{
    // Dereference the pointer and compute the result
    *temperature = (5.0 / 9.0) * (*temperature - 32.0);
}

int main()
{
    float temperature = 98;

    // Call the fahrenheitToCelsius to convert the temperature.
    fahrenheitToCelsius(&temperature);

    return 0;
}



