#include <iostream>
using namespace std;

// Declare a structure named "Car"
struct Car
{
    int year;
    string brand;
    string model;
};

void printCar(Car carToPrint)
{
    cout << "Car: " << carToPrint.year 
                    << " " << carToPrint.brand 
                    << " " << carToPrint.model << endl;
}

int main()
{
    // Object of type Car  
    Car myCar = {2006, "Honda", "CRV"};

    printCar(myCar);

    return 0;
}



