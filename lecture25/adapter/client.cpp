#include <iostream>
#include "ImperialInterface.h"
#include "ObjectAdapter.h"

class Client 
{
public:
    void useTemperatureUtility(const ImperialInterface& utility) 
    {
        std::cout << "Temperature in Fahrenheit: " << utility.getTemperatureInFahrenheit() << std::endl;
    }
};

int main() 
{
    ObjectAdapter objectAdapter;

    Client client;
    client.useTemperatureUtility(objectAdapter); // Using Object Adapter

    return 0;
}
