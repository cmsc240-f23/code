#include <iostream>
using namespace std;


int global = 22;

int main()
{
    int num = 50;
    global = 33;

    // New Scope, new block scope.
    {
        int x = 20;
        int num = 42;
        global = 24;
    }

    // cout << x << endl;

    cout << nu << endl;


}