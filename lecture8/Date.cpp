#include "Date.h"

Date::Date()  // default constructor
    : year{2021}, month{1}, day{1}  
{
}

// Date::Date(int yyyy, int mm, int dd)  // constructor
//     : year{yyyy}, month{mm}, day{dd}  // member initializer list
// {
//     is_valid();
// }

bool Date::is_valid()
{
    // Validate date here...
    return true;
}


// Date::Date(int yyyy, int mm, int dd)  // constructor
// {
//     year = yyyy;                      // initialize members
//     month = mm;
//     day = dd;

//     is_valid();
// }