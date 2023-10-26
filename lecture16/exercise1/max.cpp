#include <iostream>
using namespace std;


int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int x = 10;
    int y = 6;

    cout << "The max of x and y is " << max(x, y) << endl;

    return 0;
}

