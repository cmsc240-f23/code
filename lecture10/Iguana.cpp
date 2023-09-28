#include <iostream>
#include "Iguana.h"
using namespace std;

Iguana::Iguana(string name, int age, std::string homeForest, std::string color, float tailLength, float weight)
    : Animal(name, age), homeForest{homeForest}, color{color}, tailLength{tailLength}, weight{weight}
{
    cout << "Iguana constructor..." << endl;
}

void Iguana::speak()
{
    cout << "Iguana says I hate cats..." << endl;
}
