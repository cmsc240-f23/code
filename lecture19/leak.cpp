#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int leakyFunction()
{
    string* pointerToString = new string("Leak");

    /*  ... some processing ... */


    return 0;
}


int leakyFunction2()
{
    string* pointerToString = new string("Leak");

    /*  ... some processing ... */

    try 
    {
        char ch = pointerToString->at(50); 
    } 
    catch (out_of_range exception) 
    {
        cerr << "Caught an out_of_range error: " << exception.what() << endl;
        throw exception; 
    }

    delete pointerToString;

    return 0;
}



