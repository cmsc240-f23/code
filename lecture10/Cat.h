#ifndef CAT_H
#define CAT_H
#include <string>
#include "Animal.h"

class Cat : public Animal
{
public:
    Cat(std::string name, int age, float whiskerLength);
    void setNumberOfLives(int num);
    void speak();
private:
    int numberOfLives;
    float whiskerLength;
};

#endif