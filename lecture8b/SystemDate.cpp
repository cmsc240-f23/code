#include "SystemDate.h"

SystemDate::SystemDate(int yyyy, int mm, int dd)  // private constructor
    : year{yyyy}, month{mm}, day{dd}  
{
    is_valid();
}

SystemDate* SystemDate::instancePointer = nullptr;

// public static member function to call the private constructor
SystemDate* SystemDate::getInstance()
{
    // If there is no instance of class then we create an instance.
    if (instancePointer == nullptr)
    {
        // Create a new instance using the private constructor.
        instancePointer = new SystemDate(2023, 9, 21);
        return instancePointer;
    }
    else // Else, return the exiting instance. 
    {
        return instancePointer;
    }
}


bool SystemDate::is_valid()
{
    // Validate date here...
    return true;
}





