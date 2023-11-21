#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userInputString;

    // Prompt the user to enter a string
    cout << "Please enter a string: " << endl;

    // Read the full line of text into userInputString
    getline(cin, userInputString);

    // Get the length of the string
    unsigned int len = userInputString.length();

    // Incorrect type conversion
    if (len > -1)
    {
        cout << "String length is " << len << "which is GREATER than -1 " << endl;
    }
    else 
    {
        cout << "String length is " << len << " which is LESS than -1 " << endl;
    }

    // The if condition is checking if the length of the string is greater than -1.
    // However, len is an unsigned integer, and the comparison with -1 (which is
    // signed) does not make sense. In C++, comparing an unsigned integer with a
    // signed value will convert the signed value to unsigned, and -1 becomes
    // UINT_MAX, which is the largest possible value for an unsigned int. Therefore,
    // the condition (len > -1) is always false because len is always less than UINT_MAX.
    // As a result, the else block will always be executed.

    return 0;
}