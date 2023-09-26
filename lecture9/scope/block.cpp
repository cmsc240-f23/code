#include <iostream>
using namespace std;

int main() 
{
    // The height variable has block scope within the main() function
    float height = 177.8;  

    cout << height << endl;  // Prints 177.8

    {
        // This height has block scope limited to this block 
        // and hides the outer height
        float height = 142.6;  

        cout << height << endl;  // Prints 142.6
    }

    // Prints 177.8 again, because we're referring to the outer height
    cout << height << endl;  

    // The height that was set to 142.6 is now out of scope and can't be accessed

    return 0;
}
