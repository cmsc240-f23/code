#include <iostream>
#include "Rabbit.h"
using namespace std;

Rabbit::Rabbit(string name, int age, float height)
: Animal(name, age), height{height}
{
    cout << "Rabbit constructor..." << endl;
}

void Rabbit::setEarLength(int newEarLength)
{
    earLength = newEarLength;
}

void Rabbit::setColor(string newColor)
{
    color = newColor;
}

void Rabbit::speak(){
    cout << "say something" << endl;
}
