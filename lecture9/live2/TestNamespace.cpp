#include <iostream>
#include <string>
using namespace std;

int num = 100000;

namespace apple
{
    string name = "apple";
    int num = 50;

    void function() 
    {
        cout << "Inside apple namespace." << endl;
    }
}

namespace apple
{

    int newVar = 100;

}

namespace orange
{
    string name = "orange";
    int num = 50;

    void function() 
    {
        cout << "Inside orange namespace." << endl;
    }

    namespace nestedOrange
    {
        int x = 10;
    }
}



int main()
{
    cout << apple::name << orange::name << endl;

    cout << orange::nestedOrange::x << endl;

    apple::function();
    orange::function();

    using namespace apple;

    cout << ::num << endl;


}
