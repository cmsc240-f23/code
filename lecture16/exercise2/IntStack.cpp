#include <stdexcept>
#include "IntStack.h"

// Return true if stack is empty.
bool IntStack::isEmpty() 
{
    return elements.empty();
}

// Add a new element to the top of stack.
void IntStack::push(int element) 
{
    elements.push_back(element);
}

// Remove the top element from the stack and return it.
// Throw out_of_range exception if stack is empty.
int IntStack::pop() 
{
    if (isEmpty()) 
    {
        throw std::out_of_range("IntStack::pop: empty stack");
    }

    int topElement = elements.back();
    elements.pop_back();

    return topElement;
}

// Get the top element from the stack without removing it.
// Throw out_of_range exception if stack is empty.
int IntStack::top() 
{
    if (isEmpty()) 
    {
        throw std::out_of_range("IntStack::top: empty stack");
    }
    
    return elements.back();
}
