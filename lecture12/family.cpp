#include <iostream>
#include <string>

class Parent {
public:
    Parent() { }
    std::string publicKnowdge() {
        return "Go ahead and print it in the newspaper...";
    }
protected:
    std::string familySecret() {
        return "It's all in the family...";
    }
private:
    std::string parentPersonalSecret() {
        return "I wont tell anyone...";
    }
};

class Child : public Parent {
public:
    Child() { }
    void whatTheChildKnows() {
        std::cout << "I know " << familySecret() << std::endl;

        std::cout << "I do not know " << parentPersonalSecret() << std::endl;
    }
};


// I'm the public
int main()
{
    Parent parentalUnit = {};

    std::cout << parentalUnit.publicKnowdge() << std::endl;

    // Public does not know either the family secret or the parent personal secret. 
    std::cout << parentalUnit.familySecret() << std::endl;
    std::cout << parentalUnit.parentPersonalSecret() << std::endl;


}