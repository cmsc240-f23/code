#include <iostream>
using namespace std;

// Tells the compiler that globalVar is declared in another file
extern int globalVar;  

// This variable is strictly limited to file2.cpp due to 'static'
static int fileScopedVar = 123; 

void printVarsFile2() 
{
    // Update the global variable.
    globalVar = 50;

    cout << endl << "In printVarsFile2" << endl;
    cout << "globalVar == " <<  globalVar << endl;
    cout << "fileScopedVar == " <<  fileScopedVar << endl;
}
