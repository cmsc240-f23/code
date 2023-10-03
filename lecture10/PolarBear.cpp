#include "PolarBear.h"
#include <iostream>

using namespace std;

PolarBear::PolarBear(std::string name, int age, int weight, float furLength) 
: Animal{name, age}, weight{weight}, furLength{furLength}
{
    
}

int PolarBear::getWeight()
{
    return weight;
}

void PolarBear::speak(){
    cout << "Polar Bear says ROARRRRRRRR!!!!" << endl;
}


