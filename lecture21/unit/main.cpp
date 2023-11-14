#include <stdexcept>
#include <iostream>
#include "leap.h"
using namespace std;

int main() 
{
    try 
    {
        int year;
        cout << "Enter a year to check if it's a leap year: ";
        cin >> year;

        if (isLeapYear(year)) 
        {
            cout << year << " is a leap year." << endl;
        } 
        else 
        {
            cout << year << " is not a leap year." << endl;
        }
    } 
    catch (exception& except) 
    {
        cerr << "Error: " << except.what() << endl;
    }

    return 0;
}
