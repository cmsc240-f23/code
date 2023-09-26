#include <iostream>
using namespace std;

// This variable has file scope in file1.cpp
int globalVar = 42;            

// This variable is strictly limited to file1.cpp due to 'static'
static int fileScopedVar = 10; 

void printVarsFile1() 
{
    cout << "In printVarsFile1" << endl;
    cout << "globalVar == " <<  globalVar << endl;
    cout << "fileScopedVar == " <<  fileScopedVar << endl;
}

// Defined in File2.
void printVarsFile2();

int main()
{
    printVarsFile1();
    printVarsFile2();

    cout << endl << "In main" << endl;
    cout << "globalVar == " <<  globalVar << endl;
    cout << "fileScopedVar == " <<  fileScopedVar << endl;
    return 0;
}



