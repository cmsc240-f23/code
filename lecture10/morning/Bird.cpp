#include <iostream>
#include "Bird.h"
using namespace std;

Bird::Bird(std::string name, int age, std::string color, std::string species, std::string gender)
: Animal(name, age), color{color}, species{species}, gender{gender}
{
    cout << "Bird constructor" <<endl;
}


bool Bird::isFlying()
{
    return true;
}

std::string Bird::getColor()
{
    return color;

}

void Bird::speak()
{
    cout << "cacaca, carrot!" <<endl;
}
std::string Bird::getSpecies()
{
     return species;
}

std::string Bird::getGender()
{
     return gender;
}
