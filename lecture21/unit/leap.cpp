#include <stdexcept>

bool isLeapYear(int year) 
{
    if (year <= 0) 
    {
        throw std::invalid_argument("Year must be greater than 0.");
    }

    bool leapYear = false;

    if (year % 4 == 0) 
    {
        if (year % 100 != 0) 
        {
            leapYear = true;
        } 
        else if (year % 400 == 0) 
        {
            leapYear = true;
        }
    }

    return leapYear;
}


