#include "Date.h"

// Use the scope resolution operator :: to implement Date methods.

// Implementation of the constructor
Date::Date(int yyyy, int mm, int dd) 
    : year{yyyy}, month{mm}, day{dd}  // member initializer list
{
    // Validate the new date.
    isValid();
}

// Implementation of the addDays() public method
void Date::addDays(int num)
{
    day += num;
}

// Implementation of the isValid() private method
bool Date::isValid()
{
    // Validate date here...
    return true;
}
