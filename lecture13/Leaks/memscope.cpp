#include <iostream>

double* calculate(int resultSize, int max)
{
    double* values = new double[max];

    double* results = new double[resultSize];

    /* ... the results are calculated here using values ... */


    return results;
}

int main() 
{
    double* result = calculate(100, 1000);
    
    for (int i = 0; i < 100; i++) {
        std::cout << result[i] << std::endl;
    }

    delete[] result;

    return 0;
}