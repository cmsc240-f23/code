#include <iostream>
using namespace std;

int main() 
{
    // Dynamically allocate an integer and make 'ptr' point to it
    int* ptr1 = new int[5];  

    cout << "ptr1 address == " << ptr1 << endl;

    // Deallocate the memory
    delete[] ptr1;  

    // 'ptr' now becomes a dangling pointer 
    // since it still holds the address of the deallocated memory

    int* ptr2 = new int[5];

    cout << "ptr2 address == " << ptr2 << endl;
    cout << "*ptr2 == " << *ptr2 << endl;

    // Accessing memory through a dangling pointer, leading to undefined behavior
    *ptr1 = 10;  

    cout << "*ptr2 == " << *ptr2 << endl;

    return 0;
}
