#ifndef IGUANA_H
#define IGUANA_H
#include <string>
#include "Animal.h"

class Iguana : public Animal
{
public:
    Iguana(std::string name, int age,std::string homeForest, std::string color, float tailLength, float weight);
    void speak();

private:
    std::string homeForest;
    std::string color;
    float tailLength;
    float weight;
};

#endif