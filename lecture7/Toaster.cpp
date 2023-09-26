#include <string>
#include "Toaster.h"

using namespace std;

Toaster::Toaster(int initialLevel) { setLevel(initialLevel); }

void Toaster::toast() { isToasting = true; }

void Toaster::cancel() { isToasting = false; }

bool Toaster::isOn() const { return isToasting; }

int Toaster::getLevel() const { return heatLevel; }

string Toaster::getStatus() 
{
    string status = "Not Toasting.";

    if (isToasting)
    {
        status = "Toasting";    
    }

    return status;
}

void Toaster::setLevel(int newLevel)
{
    if (isValidLevel(newLevel))
    {
        heatLevel = newLevel;
    }
}

bool Toaster::isValidLevel(int level) 
{ 
    return level >= 1 && level <= 7; 
}



int main()
{
    
    return 0;
}


