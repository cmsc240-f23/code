#ifndef PARROT_H
#define PARROT_H
#include "Animal.h"
#include <string>

using namespace std;
class Parrot : public Animal 
{
    
    public:
    Parrot(std::string name, int age, std::string color);
    void speak();

    private:
        std::string color;
};

#endif