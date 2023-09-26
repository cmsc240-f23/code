#include <iostream>
#include "Date.h"

int main()
{
    Date today = {2023, Month::sep, 21};

    std::cout << "year == " << today.getYear() << std::endl;
    std::cout << "month == " << today.getMonth() << std::endl;
    std::cout << "day == " << today.getDay() << std::endl;
}




