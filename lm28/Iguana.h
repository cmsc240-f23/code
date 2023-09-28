#ifndef IGUANA_H
#define IGUANA_H
#include "Animal.h"
#include <string>


class Iguana : public Animal
{
public:
    Iguana(std::string name, int age, std::string species, float size);
    void speak();
    void measure();
    void grow();
private:
    std::string species;
    float size;
};
#endif