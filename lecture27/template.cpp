#include <iostream>
#include <vector>
using namespace std;

double averageVector(vector<double> vec) 
{
    if (vec.empty()) 
    {
        // Return 0 for empty vector
        return 0.0; 
    }

    double sum = 0.0;

    for (double num : vec) 
    {
        sum += num;
    }

    return sum / vec.size();
}

int main() 
{
    vector<double> vec = {1.5, 2.5, 3.5, 4.5, 5.5};
    cout << "Average of vector elements is " << averageVector(vec) << endl;
    return 0;
}
