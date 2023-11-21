#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int value = 42;
    char userInputBuffer[10];

    cout << "Please provide some input: " << endl;

    // Call to get string to input from the user into the buffer.
    scanf("%s", userInputBuffer);

    if(value != 42)
    {
        cout << "Value was changed: " << value << endl;
    }
    else
    {
        cout << "Value was unchanged: " << value << endl;
    }
    
    return 0;
}