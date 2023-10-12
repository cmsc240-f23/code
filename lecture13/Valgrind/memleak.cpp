#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int;
    
    *ptr = 50;

    cout << "Contents of pointer == " << *ptr << endl;

    ptr = new int; //<-- memory leak

    delete ptr;

    return 0;
}