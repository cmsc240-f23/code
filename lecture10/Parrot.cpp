#include <iostream>
#include <string>
#include "Parrot.h"
using namespace std;

Parrot::Parrot(string name, int age, string color)
: Animal(name, age), color{color} 
{
    cout << "Parrot Constructor..." << endl;
}

void Parrot::speak()
{
    cout << "Parrot says what you say." << endl;
}
