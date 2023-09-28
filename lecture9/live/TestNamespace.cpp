#include <iostream>
#include <string>
using namespace std;


namespace apple 
{
    std::string name = "apple";
    int num = 50;

    void function()
    {
        std::cout << "In apple function." << endl;
    }
}

namespace apple
{
    void function2()
    {
       std::cout << "In apple function2." << endl; 
    }

    namespace nested
    {
        std::string myString = "Nested";
    }
}

namespace orange 
{
    string name = "orange";
    int num = 100;

    void function()
    {
        cout << "In orange function." << endl;
    }
}



int main()
{
    apple::function();
    apple::function2();
    orange::function();


    cout << apple::nested::myString << endl;


    using namespace orange;
    using namespace apple;

    cout << apple::name << endl;



}
