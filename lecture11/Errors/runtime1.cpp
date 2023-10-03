#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Create a new string. 
    string testString = "";

    // Print out the characters in the string backwards.
    for (int i = 26; i >= 0; i--)
    {
        cout << testString[i] << endl;
    }

    return 0;
}