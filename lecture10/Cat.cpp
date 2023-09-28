#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat(std::string name, int age, float whiskerLength)
: Animal(name, age), whiskerLength{whiskerLength}
{
    cout << "Cat constructor..." << endl;
}

void Cat::setNumberOfLives(int num)
{
    numberOfLives = num;
}

void Cat::speak()
{
    cout << "Cat says meow..." << endl;
}
