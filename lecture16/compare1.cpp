#include <iostream>
#include <string>
using namespace std;

// returns 0 if equal, 1 if value1 is bigger, -1 otherwise
int compare(int value1, int value2) 
{
    if (value1 > value2) return 1;
    if (value1 < value2) return -1;
    return 0;
}

int compare(string value1, string value2) 
{
    if (value1 > value2) return 1;
    if (value1 < value2) return -1;
    return 0;
}

int main() 
{
    cout << compare(1, 2) << endl;
    cout << compare("two", "one") << endl;
    return 0;
}


