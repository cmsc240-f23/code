#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
    Date::setDefaultYear(2023);  

    cout << Date::DEFAULT_YEAR << endl;

    // Correct
    Date today = {2023, 9, 21};

    today.add_day(1);

    return 0;
}



