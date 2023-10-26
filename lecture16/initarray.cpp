#include <iostream>
#include <string>
using namespace std;

// return a pointer to new N-element heap array filled with value
template <typename T, int N>
T* setupArray(T value) 
{
    T* array = new T[N];
    for (int i = 0; i < N; i++)
    {
        array[i] = value;
    }
    return array;
}

int main() 
{
    int* intPointer = setupArray<int, 10000>(42);
    string* stringPointer = setupArray<string, 10>("hello");
    delete[] intPointer, stringPointer;
    return 0;
}



