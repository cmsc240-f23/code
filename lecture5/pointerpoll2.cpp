#include <iostream>
using namespace std;

float function(float* ptr, float num) 
{
    *ptr = 1234.567;

    num = 8675.309;
    
    return(num);
}

int main() 
{
    float value = 5551.212;

    function(&value, value);

    cout << value << endl;
}


