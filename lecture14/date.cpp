/*
For this exercise, we'll consider date validation for the MM/DD/YYYY format (Month/Day/Year), 
which is commonly used in the United States. 

Here are the rules for validating dates in this format:

    The month (MM) must be between 01 and 12.
    The day (DD) must be a valid day within the month (e.g., 01-31).
    The year (YYYY) should be within a reasonable range (e.g., 1900-2099).

Add a regex pattern that will match the date rules above as valid.
*/

#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() 
{
    string date;
    cout << "Enter a date (MM/DD/YYYY): ";
    cin >> date;

    // Define a regular expression pattern for date validation
    regex pattern{R"(   YOUR REGEX PATTERN HERE   )"};

    if (regex_match(date, pattern)) 
    {
        cout << "Valid date!" << endl;
    } 
    else
    {
        cout << "Invalid date." << endl;
    }

    return 0;
}