#ifndef DOG_H
#define DOG_H
#include <string>
#include "Animal.h"

class Dog : public Animal
{
public:
    Dog(std::string name, int age, float height);
    void setDogBreed(std::string breed);
    void speak();
private:
    std::string dogBreed;
    float height;
};

#endif