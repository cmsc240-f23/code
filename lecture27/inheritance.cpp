#include <iostream>

using namespace std;

class Square 
{
public:
    Square(double s) : side(s) { }

    double getArea() 
    {
        return side * side;
    }

private:
    double side;
};


class Box : public Square 
{
public:
    Box(double s, double h) : Square(s), height(h) { }

    double getVolume()
    {
        // Base square area * height
        return getArea() * height; 
    }

private:
    double height;
};


int main() 
{
    // Example: Box with side 5 and height 10
    Box myBox(5, 10); 
    cout << "Area of the base square: " << myBox.getArea() << endl;
    cout << "Volume of the box: " << myBox.getVolume() << endl;
    return 0;
}

