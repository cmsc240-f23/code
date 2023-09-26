#include <iostream>
using namespace std;

int main()
{
    int num = 50;

    int* pointer = nullptr;

    *pointer = num;

    cout << "The contents of the pointer is " << *pointer << endl;

    return 0;
}