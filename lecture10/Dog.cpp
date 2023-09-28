#include <iostream>
#include "Dog.h"
using namespace std;

Dog::Dog(string name, int age, float height)
: Animal(name, age) , height{height}
{
    cout << "Dog constructor..." << endl;
}

void Dog::setDogBreed(string breed)
{
    dogBreed = breed;
}

void Dog::speak()
{
    cout << "Dog says bark..." << endl;
}