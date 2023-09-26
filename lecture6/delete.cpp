#include <iostream>
using namespace std;





int main()
{
    // Allocate one int
    int* pointerToOneInt = new int;

    // Free the allocated int
    delete pointerToOneInt;

    // Allocate 4 ints (an array of 4 ints)
    int* pointerToIntArray = new int[4];

    // Free the allocated 4 ints
    delete[] pointerToIntArray;



    return 0;
}

