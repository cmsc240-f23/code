#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>
#include "Animal.h"

class Capybara : public Animal
{
public:
    Capybara(std::string name, int age, bool saysSlogan);
    void speak();
    void addFriend();
private:
    int numberOfFriends;
    bool saysSlogan;
};

#endif