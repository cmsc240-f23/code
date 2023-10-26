#include <iostream>
#include <string>
using namespace std;

// returns 0 if equal, 1 if value1 is bigger, -1 otherwise
template <typename T>
int compare(T value1, T value2) 
{
    if (value1 > value2) return 1;
    if (value1 < value2) return -1;
    return 0;
}

int main() 
{
    cout << compare(1, 2) << endl;
    cout << compare("two", "one") << endl;
    cout << compare(50.5, 50.6) << endl;
    return 0;
}




