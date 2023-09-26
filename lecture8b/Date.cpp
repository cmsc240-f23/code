#include "Date.h"

Date::Date()  // default constructor
    : year{DEFAULT_YEAR}, month{1}, day{1}  
{
}

Date::Date(int yyyy, int mm, int dd)  // constructor
    : year{yyyy}, month{mm}, day{dd}  // member initializer list
{
    is_valid();
}

int Date::DEFAULT_YEAR = 2001;

void Date::setDefaultYear(int yearDefault)
{
    DEFAULT_YEAR = yearDefault;
}




bool Date::is_valid()
{
    // Validate date here...
    return true;
}


