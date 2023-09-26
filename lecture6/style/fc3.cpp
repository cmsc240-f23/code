#include <iostream>
using namespace std;

#define LOWER_LIMIT 0
#define UPPER_LIMIT 300
#define STEP_SIZE 20

int main()
{
    float fahrenheit, celsius;
    
    fahrenheit = LOWER_LIMIT;

    while (fahrenheit <= UPPER_LIMIT)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

        cout << fahrenheit << "\t" << celsius << endl;
        
        fahrenheit = fahrenheit + STEP_SIZE;
    }

    return 0;
}


