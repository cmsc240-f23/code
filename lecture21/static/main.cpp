#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) 
{
    for (size_t i = 0; i <= v.size(); ++i) 
    {
        cout << v[i] << endl; // Potential out-of-bounds access
    }
}

int main() 
{
    char* p = new char[10];

    vector<int> numbers = {1, 2, 3, 4, 5};
    printVector(numbers);

    delete p; // Should be 'delete[] p;' to match 'new[]'
    return 0;
}



