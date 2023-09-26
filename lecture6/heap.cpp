#include <iostream>
using namespace std;

int main()
{
    // Allocate one int
    int* pointerToOneInt = new int;

    // Write to the object pointed to by the pointer.
    *pointerToOneInt = 50;

    // Allocate 4 ints (an array of 4 ints)
    int* pointerToIntArray = new int[4];

    // Write to the objects in the array using array notation.
    pointerToIntArray[0] = 10;
    pointerToIntArray[1] = 20;
    pointerToIntArray[2] = 30;
    pointerToIntArray[3] = 40;

    return 0;
}

