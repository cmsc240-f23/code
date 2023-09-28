#include "Ferret.h"
#include <iostream>
#include <string>
using namespace std;

Ferret::Ferret(int length, string criminal_status, string color, bool isCute)
: Animal(name, age), length{length}, criminal_status{criminal_status}, color{color}, isCute{isCute}
{

    cout << "Ferret constructor" << endl;
}

void Ferret::dighole(float depth)
{
    cout << "The ferret dug a hole " << depth << " inches deep" << endl;
}

void Ferret::reproduce()
{
    cout << "The ferret reproduces" << endl;
}

void Ferret::changeCriminal_status()
{
    criminal_status = !criminal_status;
}

void Ferret::bite()
{
    cout << "The Ferret bites you" << endl;
}

bool Ferret::isDigging()
{
    return true;
}

float Ferret::getLength()
{
    return length;
}

void Ferret::grow()
{
    length += 10
}

string Ferret::getGender()
{
    return gender;
}

void Ferret::Speak()
{
    cout << "lalala lala lala, I enjoy soup" << endl;
}
