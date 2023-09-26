#include "Date.h"

Date::Date(int yyyy, Month mm, int dd)      // constructor
        : year{yyyy}, month{mm}, day{dd}    // member initializer list
{
    is_valid();
}

bool Date::is_valid()
{
    // Validate date here...
    return true;
}

void Date::add_day(int num)
{
    // Add day to date...
}




