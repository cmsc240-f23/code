#include <iostream>
#include <string>
#include "SimpleSmartPointer.h"
using namespace std;

void processPointers()
{
    // Create a regular pointer.
    string* leaking = new string("Regular");
    
    // Create a simple smart pointer.
    SimpleSmartPointer<string> notleaking(new string("Smart"));
    
    cout << "*leaking == " << *leaking << endl;
    cout << "*notleaking == " << *notleaking << endl;
}

int main() 
{
    // Call the processPointers function.
    processPointers();

    // Returned from processPointers function scope. 
    cout << "Back in main function." << endl;
    
    return 0;
}

