#include <iostream>
using namespace std;

// Declare a structure named "Car"
struct Car
{
    int year;
    string brand;
    string model;
};

int main()
{
    // A Car variable (named object).
    Car dreamCar;
    dreamCar.year = 1969;         // use . to access fields
    dreamCar.brand = "Ford";
    dreamCar.model = "Mustang";

    // Another Car object.  
    Car myCar = {2006, "Honda", "CRV"};

    cout << "Dream car: " << dreamCar.year 
                          << " " << dreamCar.brand 
                          << " " << dreamCar.model << endl;

    return 0;
}



