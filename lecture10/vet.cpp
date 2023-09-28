#include <iostream>
#include <vector>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

int main()
{
    // Create an Animal
    Animal anim{"Animal", 42};

    // Create a dog and a cat.
    Dog woofer{"Woofer", 3, 36.4};
    Cat cheddar{"Cheddar", 5, 3.1};

    // Create a vector of animal pointers.
    vector<Animal*> animals;

    // Add addresses to a dog and a cat.
    animals.push_back(&woofer);
    animals.push_back(&cheddar);
    
    // Have the animals eat.
    for (Animal* aPtr : animals)
    {
        aPtr->eat();
    }

    // Have the animals speak.
    for (Animal* aPtr : animals)
    {
        aPtr->speak();
    }
    
    return 0;
}