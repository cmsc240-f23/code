/*
Phone Number Rules:

For this exercise, we'll consider North American phone numbers, 
which typically follow the format (NPA) NXX-XXXX, where:

    NPA (Numbering Plan Area) is the area code.
    NXX is the central office code, and it must not start with 0 or 1.
    XXXX is the line number.

Add a regex pattern that will match the phone number rules above as valid.
*/

#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() 
{
    string phone;
    cout << "Enter a phone number: ";
    getline(cin, phone);

    // Define a regular expression pattern for phone number validation
    regex pattern{R"(   YOUR REGEX PATTERN HERE   )"};

    if (regex_match(phone, pattern)) 
    {
        cout << "Valid phone number!" << endl;
    } 
    else
    {
        cout << "Invalid phone number." << endl;
    }

    return 0;
}