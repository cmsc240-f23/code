#include <iostream>
using namespace std;

int main()
{
    // Create a new integer value and assign it the number 50.
    int num = 50;

    // Create a new integer pointer to hold the address of an integer value. 
    int* pointer; 

    // Put the address of the variable num into 
    // the pointer using the "address of" operator &.
    pointer = &num;  

    // The * symbol means "go to" the address contained in the pointer variable. 
    // The address is that of the integer variable num.
    // So, now num is assigned the value 100.
    *pointer = 100;



    return 0;
}



