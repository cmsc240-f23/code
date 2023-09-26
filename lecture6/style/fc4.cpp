#include <iostream>
using namespace std;

#define LOWER_LIMIT 0
#define UPPER_LIMIT 300
#define STEP_SIZE 20

/**
 * This program will print a Fahrenheit-Celsius table.
 * The table will start at the LOWER_LIMIT and stop at the UPPER_LIMIT.
 * The table will increase by the STEP_SIZE.
 */
int main()
{
    float fahrenheit, celsius;
    
    fahrenheit = LOWER_LIMIT;

    // While the value for fahrenheit is less than the UPPER_LIMIT.
    while (fahrenheit <= UPPER_LIMIT)
    {
        // Convert the fahrenheit value to celsius.
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

        cout << fahrenheit << "\t" << celsius << endl;
        
        // Increase the fahrenheit value by STEP_SIZE.
        fahrenheit = fahrenheit + STEP_SIZE;
    }

    return 0;
}

