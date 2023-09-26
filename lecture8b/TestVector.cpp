#include <iostream>
#include "Vector.h"
using namespace std;

ostream& operator<<(ostream& out, const Vector& v) 
{
    out << "[" << v.getX() << ", " << v.getY() << "]";
    return out;
}

int main()
{
    Vector v1(1, 2);
    Vector v2(3, 4);

    Vector v3 = v1 + v2;  // Uses the overloaded + operator

    Vector v4 = v1 - v2; // Uses the overloaded - operator

    int a = 10;
    int b = 11;

    int c = a + b;

    cout << c << endl;

    // Print out the vector.
    cout << "v1 == " << v1 << endl;
    cout << "v2 == " << v2 << endl;
    cout << "v3 == " << v3 << endl;
}




