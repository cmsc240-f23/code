#include <cstdlib>
#include <iostream>
using namespace std;

#define BUFFER_SIZE 16384

int main() 
{
    // Create a buffer for user input.
    char* buffer = new char[BUFFER_SIZE];
 
    // Get data from a user. 
    cout << "Enter a string: " << endl;
    cin.getline(buffer, BUFFER_SIZE);

    // Vulnerable part: using the buffer directly in printf without format specifiers
    printf(buffer);

    cout << endl;

    return 0;
}
