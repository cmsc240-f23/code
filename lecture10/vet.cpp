#include <iostream>
#include <vector>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Iguana.h"
#include "Parrot.h"
#include "Capybara.h"

// Add your header here

using namespace std;

int main()
{
    // Create an Animal
    //Animal anim{"Animal", 42};

    // Create a dog and a cat.
    Dog woofer{"Woofer", 3, 36.4};
    Cat cheddar{"Cheddar", 5, 3.1};
    
    // Create your instance of class here.
    Iguana jose{"José", 54, "Mexico", "brown", 6, 49};

    Parrot sparkle{"Sparkle", 15, "green"};


    Capybara capybara{"Capybara", 3, true};
    capybara.addFriend(); // capybara has a friend
    capybara.addFriend(); // capybara has another friend

    // Create a vector of animal pointers.
    vector<Animal*> animals;

    // Add addresses to a dog and a cat.
    animals.push_back(&woofer);
    animals.push_back(&cheddar);
    animals.push_back(&sparkle);
    animals.push_back(&capybara);
    animals.push_back(&jose);
    
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