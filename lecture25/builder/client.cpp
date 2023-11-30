#include <iostream>
#include "CarBuilder.h"
#include "Director.h"

using namespace std;

int main() 
{
    Director director;
    CarBuilder carBuilder;

    director.constructSportsCar(carBuilder);
    Car sportsCar = carBuilder.getResult();

    director.constructSUV(carBuilder);
    Car sportsUtilityVehicle = carBuilder.getResult();


    // Print out cars.
    cout << sportsCar << endl;
    cout << endl << sportsUtilityVehicle << endl;

    return 0;
}
