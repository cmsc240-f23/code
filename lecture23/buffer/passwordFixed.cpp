#include <stdio.h>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

const char *PASSWORD_FILE = "5uper5ecre+";

int main() 
{
    char password[12];
    string input;
    
    sscanf(PASSWORD_FILE, "%s", password);

    cout << "Enter password: ";
    cin >> input;

    cout << "Address of input: " << &input << "\n";
    cout << "Address of password: " << &password << "\n";
    cout << "Input: " << input << "\n";
    cout << "Password: " << password << "\n";

    // Compare the input string with the password.
    if (strncmp(password, input.c_str(), 12) == 0)
    {
        cout << "Access granted" << endl;
    }
    else
    {
        cout << "Access denied" << endl;
    }

    return 0;
}
