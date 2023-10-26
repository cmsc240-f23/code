#include <iostream>
using namespace std;

int maxValue(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int x = 10;
    int y = 6;
    cout << "The max value of x and y is " << maxValue(x, y) << endl;
    return 0;
}

