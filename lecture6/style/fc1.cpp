#include <iostream>
using namespace std;

int main()
{
    float x, y;

    int l = 0;
    int u = 300;
    int s = 20;
    
    x = l;

    while (x <= u)
    {
        y = (5.0 / 9.0) * (x - 32.0);
        
        cout << x << "\t" << y << endl;

        x = x + s;
    }

    return 0;
}


