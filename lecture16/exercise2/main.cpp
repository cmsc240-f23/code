#include "IntStack.h"
#include <iostream>

int main() 
{
    IntStack intStack; // Create a stack for integers

    // Push elements onto the stack
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    // Pop and print elements from the stack
    while (!intStack.isEmpty()) 
    {
        std::cout << intStack.top() << std::endl;
        intStack.pop();
    }

    return 0;
}
