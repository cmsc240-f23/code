#ifndef RABBIT_H
#define RABBIT_H

#include <string>
#include "Animal.h"

class Rabbit: public Animal{

public:
    Rabbit(std::string name, int age, float height);
    void setEarLength(int earLength);
    void setColor(std::string color);
    void speak();

private:
    int earLength;
    std::string color;
    float height;


};

#endif