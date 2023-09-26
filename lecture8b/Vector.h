#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:  
    Vector(float x, float y);  // Constructor
    Vector operator+(const Vector& other) const;  // Overload +
    
    Vector operator-(const Vector& other) const;  // Overload -

    float getX() const { return x; }
    float getY() const { return y; }
private:
    float x;
    float y;
};

#endif



