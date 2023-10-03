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

void Date::add_day(int num)
{
    // Add day to date...
    day += num;
}

int Date::getYear() 
{ 
    return year; 
}   

int Date::getMonth() 
{ 
    return month; 
}

int Date::getDay() 
{ 
    return day; 
}

bool Date::is_valid()
{
    // Validate date here...
    return true;
}


