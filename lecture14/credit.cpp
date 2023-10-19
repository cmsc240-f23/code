/*
Credit Card Number Rules:
Credit card numbers vary in format depending on the card type (Visa, Mastercard, American Express, etc.). 
While each card type has its unique format, they all share some common characteristics.
For simplicity, let's consider a generic credit card format with the following rules:

    Consists of 16 digits.
    May include optional spaces or hyphens as separators, every 4 digits.

Add a regex pattern that will match the credit card number rules above as valid.
*/

#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() 
{
    string credit;
    cout << "Enter a credit card number: ";
    getline(cin, credit);

    // Define a regular expression pattern for credit validation
    regex pattern{R"(   YOUR REGEX PATTERN HERE   )"};

    if (regex_match(credit, pattern)) 
    {
        cout << "Valid credit card number!" << endl;
    } 
    else
    {
        cout << "Invalid credit card number." << endl;
    }

    return 0;
}