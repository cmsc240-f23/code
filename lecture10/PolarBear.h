#ifndef POLARBEAR_H
#define POLARBEAR_H
#include <string>
#include "Animal.h"


class PolarBear : public Animal 
{
public:
    PolarBear(std::string name, int age, int weight, float furLength);
    virtual void speak();
    int getWeight();
    void getNumFriends();
    

private:
    std::string name;
    int age;
    int weight;
    float furLength;
};

#endif