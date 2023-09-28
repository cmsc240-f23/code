#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(string name, int age) 
: name{name} , age{age}
{
    cout << "Animal constructor..." << endl;
}

void Animal::eat()
{
    cout << "Nom Nom Nom..." << endl;
}

void Animal::setFavoriteFood(std::string favorite)
{
    favoriteFood = favorite;
}

void Animal::sleep()
{
    cout << "Zzzz... Zzzz... Zzzz..." << endl;
}
