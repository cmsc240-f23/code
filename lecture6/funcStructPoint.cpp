#include <iostream>
using namespace std;

// Declare a structure named "Car"
struct Car
{
    int year;
    string brand;
    string model;
};

Car getCorollaByYear(int modelYear)
{
    Car corolla;
    corolla.year = modelYear;         
    corolla.brand = "Toyota";
    corolla.model = "Corolla";

    return corolla;
}

int main()
{
    // Get a Toyota  
    Car toyota = getCorollaByYear(2023);

    return 0;
}



