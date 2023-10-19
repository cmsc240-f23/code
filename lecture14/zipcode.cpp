/*
ZIP Code Rules:
For this exercise, we'll consider ZIP code validation for the United States. 

ZIP codes in the United States can have different formats:

    Standard ZIP Code (5 digits): Consists of five numeric digits.
    ZIP+4 Code (9 digits): Consists of five numeric digits followed by a hyphen and four more digits.

Add a regex pattern that will match the ZIP Code rules above as valid.
*/

#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() 
{
    string zipcode;
    cout << "Enter a ZIP code: ";
    cin >> zipcode;

    // Define a regular expression pattern for ZIP code validation
    regex pattern{R"(   YOUR REGEX PATTERN HERE   )"};

    if (regex_match(zipcode, pattern)) 
    {
        cout << "Valid ZIP code!" << endl;
    } 
    else
    {
        cout << "Invalid ZIP code." << endl;
    }

    return 0;
}