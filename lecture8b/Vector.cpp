#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(float x, float y) : x(x), y(y) {}
    
Vector Vector::operator+(const Vector& other) const 
{
    // Return an instance of Vector that is 
    // this vector added to the other vector.
    return Vector(this->x + other.x, this->y + other.y);
}

Vector Vector::operator-(const Vector& other) const 
{
    // Return an instance of Vector that is 
    // this vector added to the other vector.
    return Vector(this->x - other.x, this->y - other.y);
}




