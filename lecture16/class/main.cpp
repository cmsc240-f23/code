#include <iostream>
#include <string>
#include "Pair.h"
using namespace std;

int main() 
{
    Pair<string> stringPair;

    stringPair.set_first("Hello");
    stringPair.set_second("Goodbye");
    stringPair.swap();
    
    cout << stringPair << endl;

    return 0;
}


