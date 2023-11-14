#include <iostream>

using namespace std;



int function(int a, int b)
{
    if (a > 100)
    {
        cout << "One" << endl;
    }
    else 
    {
        cout << "Two" << endl;
    }

    if (b < 100)
    {
        cout << "Three" << endl;
    }
    else
    {
        cout << "Four" << endl;
    }
}

int main() 
{

    function(200, 20);
    function(200, 200);
    function(20, 20);

}

