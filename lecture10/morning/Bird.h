#ifndef BIRD_H
#define BIRD_H
#include <string>
#include "Animal.h"

class Bird: public Animal
{
    public:
        Bird(std::string name, int age, std::string color, std::string species, std::string gender);
        bool isFlying();
        std::string getColor();
        std::string getSpecies();
        std::string getGender();
        void speak();


    private:
        bool haveBaby();
        std::string color; 
        std::string species; 
        std::string gender;

};












#endif