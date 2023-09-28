#include <iostream>
using namespace std;

float global = 2.4;


void function2() 
{
    cout << "In function2  " << global << endl;
}

int main()
{
    float global = 5.6;

    cout << "In main " << ::global << endl;

    {
        cout << "In block " << global << endl;
    }

    function2();


}