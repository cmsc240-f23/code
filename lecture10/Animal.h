#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal
{
public:
    Animal(std::string name, int age);
    void eat();
    void setFavoriteFood(std::string favorite);
    virtual void speak() = 0;
private:
    std::string name;
    int age;
    std::string favoriteFood;
    void sleep();
};

#endif


