#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ifstream namedPipe("myNamedPipe");
    string input;
    while (true) 
    {
        getline(namedPipe, input);
        cout << "Consumer received: " << input << endl;
    }
    return 0;
}
