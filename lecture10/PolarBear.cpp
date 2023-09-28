#include "PolarBear.h"
#include "Animal.h"
#include <iostream>

using namespace std;

PolarBear::PolarBear(std::string name, int age, int weight) 
: Animal(name, age), weight{weight}, numFriends{numFriends}
{
    
}

int PolarBear::getWeight()
{
    return weight;
}

void PolarBear::getNumFriends() {
    cout << "Polar Bear has " << numFriends << " friends!" << endl;
}

void PolarBear::speak(){
    cout << "Polar Bear says ROARRRRRRRR!!!!" << endl;
}


