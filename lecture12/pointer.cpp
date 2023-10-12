#include <iostream>

int function()
{
    int intArray[10];
    
    for (int i = 0; i < 10; i++) {
        intArray[i] = i;
    }

    return intArray;
}


int main() 
{
    int* intArray = function();

    std::cout << intArray[0] << std::endl;  

    return 0;
}