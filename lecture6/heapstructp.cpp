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
    // Create a new struct on the heap.
    // Using a pointer to a Car struct. 
    Car* dreamCar = new Car;
    dreamCar->year = 1969;         // using the -> operator to access the fields
    dreamCar->brand = "Ford";
    dreamCar->model = "Mustang";

    cout << "Dream car: " << dreamCar->year 
                          << " " << dreamCar->brand 
                          << " " << dreamCar->model << endl;

    return 0;
}



