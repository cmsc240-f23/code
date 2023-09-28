#include <iostream>
using namespace std;


float globalVar;

extern float fileGlobalVar;

void function();

void function2()
{
    cout << "2 In function  " << endl;
    cout << globalVar << endl;

  
}

int main()
{

    function();
    cout << "2 In Main " << endl;
    cout << globalVar << endl;
}