#include <iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;

    int lower_limit = 0;
    int upper_limit = 300;
    int step_size = 20;
    
    fahrenheit = lower_limit;

    while (fahrenheit <= upper_limit)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

        cout << fahrenheit << "\t" << celsius << endl;
        
        fahrenheit = fahrenheit + step_size;
    }

    return 0;
}



