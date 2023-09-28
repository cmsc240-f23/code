#include <iostream>
using namespace std;


float globalVar = 3.14;

static float fileGlobalVar = 2.27;


void function()
{
    cout << "In function  " << endl;
    cout << fileGlobalVar << endl;
}

// int main()
// {

//     function();
//     cout << "In Main " << endl;
//     cout << globalVar << endl;
// }