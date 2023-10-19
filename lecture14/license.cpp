/*
Standard Passenger Vehicle License Plate (e.g., California):

    Format: XXX 123 (3 letters followed by a space and 3 digits)
    Example: ABC 123

Standard Motorcycle License Plate (e.g., Florida):

    Format: X123456 (1 letter followed by 6 digits)
    Example: M123456

Add a regex pattern that will match both the license plate formats above as valid.
*/

#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() 
{
    string license;
    cout << "Enter a license plate: ";
    getline(cin, license);

    // Define a regular expression pattern for license validation
    regex pattern{R"(   YOUR REGEX PATTERN HERE   )"};

    if (regex_match(license, pattern)) 
    {
        cout << "Valid plate!" << endl;
    } 
    else
    {
        cout << "Invalid plate." << endl;
    }

    return 0;
}