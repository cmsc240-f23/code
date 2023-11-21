#include <climits>
#include <iostream>
using namespace std;

int main() 
{
    unsigned int itemsToAllocate;
    unsigned int itemSize = sizeof(int);  // 4 bytes
    unsigned int bufferSize;

    // Let's say a user can control itemsToAllocate via input.
    cout << "Enter the number of items to allocate: ";
    cin >> itemsToAllocate;

    // Add range checking.
    if (itemsToAllocate > UINT_MAX / 4)
    {
        cout << "Too many items to allocate." << endl;
        exit(1);
    }

    // Vulnerable calculation: This can overflow if itemsToAllocate is too large.
    bufferSize = itemsToAllocate * itemSize;

    cout << "Allocating buffer of size = " << bufferSize << endl;

    // Allocate buffer based on user input
    int* buffer = new int[bufferSize];

    // Simulating a situation where more items than allocated are written to buffer
    for (unsigned int i = 0; i < itemsToAllocate; ++i) 
    {
        // This may write out of bounds if there's an overflow
        buffer[i] = i; 
    }

    // Clean up
    delete[] buffer;

    return 0;
}

// 1073741825

