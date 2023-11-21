#include <iostream>
using namespace std;

int main() 
{
    int* ptr; // Uninitialized pointer - dangerous!

    cout << "uninitialized address == " << &ptr << endl;

    // Simulate some memory operations that might inadvertently
    // use this uninitialized pointer
    int someValue = 10;
    int anotherValue = 20;

    int* allocatedMemory = new int(30);
    int* anotherAllocatedMemory = new int(40);

    // ... some complex logic here ...

    // BAD PRACTICE: Uninitialized pointer used in a condition
    if (ptr != nullptr) 
    {
        // Dereferencing an uninitialized pointer - undefined behavior!
        // This could overwrite memory used by other variables or even
        // critical program or system data, causing crashes or corruption.
        cout << "Attempting to dereference unititialized pointer." << endl;
        *ptr = 5;
    }

    // Output the values to see the effects
    cout << "someValue: " << someValue << endl;
    cout << "anotherValue: " << anotherValue << endl;
    cout << "allocatedMemory: " << *allocatedMemory << endl;
    cout << "anotherAllocatedMemory: " << *anotherAllocatedMemory << endl;

    // Cleanup allocated memory
    delete allocatedMemory;
    delete anotherAllocatedMemory;

    return 0;
}
