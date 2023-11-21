#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

const char *PASSWORD_FILE = "5uper5ecre+";

int main() 
{
    char password[12];
    char input[12];
    
    sscanf(PASSWORD_FILE, "%s", password);

    cout << "Enter password: ";
    cin >> input;

    // Compare the input string with the password.
    if (strncmp(password, input, 12) == 0)
    {
        cout << "Access granted" << endl;
    }
    else
    {
        cout << "Access denied" << endl;
    }

    return 0;
}
