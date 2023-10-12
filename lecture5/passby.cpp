#include <iostream>
using namespace std;

void passByValue(float copyOfValue) 
{
    copyOfValue = 1234.567;
}

void passByPointer(float* addressOfValue) 
{
    *addressOfValue = 1234.567;
}

void passByReference(float& referenceToValue) 
{
    referenceToValue = 9876.543;
}

int main() 
{
    float value = 5551.212;

    passByValue(value);

    cout << value << endl;

    passByPointer(&value);

    cout << value << endl;

    passByReference(value);

    cout << value << endl;

    return 0;
}
