#include <iostream>
#include "Capybara.h"
using namespace std;

Capybara::Capybara(std::string name, int age, bool saysSlogan) 
    : Animal(name, age), saysSlogan{saysSlogan}
{
    cout << "Capybara constructor..." << endl;
    numberOfFriends = 0;
}

void Capybara::addFriend()
{
    numberOfFriends++;
    cout << "capybara now has " << numberOfFriends << " friend(s)!" << endl;
}

void Capybara::speak()
{
    if (saysSlogan) {
        if (numberOfFriends == 0) {
            cout << "Ay capybara" << endl;
        } else {
            cout << "Ay capybara, capybara (" << numberOfFriends << " times)" << endl;
        }
        addFriend();
    } else {
        cout << "The capybara says nothing as they do not speak" << endl;
    }
}
