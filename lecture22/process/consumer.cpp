#include <iostream>
#include <string>
using namespace std;

int main() 
{    
    string input;
    while (getline(cin, input)) 
    {
        cout << "Consumer received: " << input << endl;
    }
    return 0;
}
