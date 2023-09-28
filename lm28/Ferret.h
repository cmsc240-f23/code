#ifndef FERRET_H
#define FERRET_H
#include "Animal.h"
#include <string>

class Ferret : public Animal
{
    public:
        Ferret(std::string name, int age, float length, bool criminal_status, std::string color, std::string gender);
        void digHole(float depth);
        void reproduce();
        void changeCriminal_Status();
        void bite();
        bool isDigging();
        float getLength();
        void grow();
        std::string getGender();
        void Speak();

    private:
        float length;
        bool criminal_status;
        std::string color;
        bool isCute;
    
};
#endif