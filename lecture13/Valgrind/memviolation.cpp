#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int;
    
    *ptr = 50;

    cout << "*ptr == " << *ptr << endl;

    delete ptr;

    *ptr = 20; //<-- memory violation (accessing invalid memory)

    cout << "*ptr == " << *ptr << endl; //<-- memory violation (accessing invalid memory)
 
    delete ptr; //<-- memory violation (double delete)

    return 0;
}