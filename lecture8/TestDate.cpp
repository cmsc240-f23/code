#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
    Date today1;                    // It works...  

    cout << today1.getDay() << endl;

    return 0;
}


//     // Supposed to by Year, Month, Day
//     // But we entered Year, Day, Month
//     Date notValid = {2023, 21, 9};

//     // Correct
//     Date today = {2023, 9, 21};

//     return 0;
// }


    // // Correct
    // Date today1 = {2023, 9, 21};

    // // Also correct
    // Date today2{2023, 9, 21};

    // // Also correct
    // Date today3(2023, 9, 21);

    // // Also correct
    // Date today4 = Date{2023, 9, 21};

    // // Also correct
    // Date today5 = Date(2023, 9, 21); 

    // // Put the new Date object on the heap
    // Date* todayPointer = new Date{2023, 9, 21};

    // delete todayPointer;

    // return 0;

