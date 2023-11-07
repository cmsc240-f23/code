#ifndef _SIMPLE_SMART_POINTER_H_
#define _SIMPLE_SMART_POINTER_H_

#include <iostream>

template <typename T> 
class SimpleSmartPointer 
{
public:
    // Constructor will initialize the pointer of type T.
    SimpleSmartPointer(T* ptr) : pointer(ptr) { } 

    // Destructor for the simple smart pointer class. 
    // Will delete the pointer to free the memory on the heap.
    ~SimpleSmartPointer() 
    { 
        std::cout << "Deleting pointer..." << std::endl;
        delete pointer; 
    } 

    // Override the * operator, returns the contents of the pointer.
    T operator*() { return *pointer; }

    // Override the -> operator, returns the pointer.
    T* operator->() { return pointer; }

private:
    // The actual pointer.
    T* pointer; 
};

#endif // _SIMPLE_SMART_POINTER_H_