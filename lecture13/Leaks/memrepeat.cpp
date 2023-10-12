#include <iostream>

int main() 
{
    int* ptr = nullptr;

    for (int i = 0; i < 10; i++) 
    {
        // Allocate memory for an integer
        ptr = new int;   

        // Assign the value of i to the allocated memory
        *ptr = i;            

        std::cout << *ptr << " " << std::endl;
    }

    delete ptr;

    return 0;
}