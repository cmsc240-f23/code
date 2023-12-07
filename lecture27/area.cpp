#include <iostream>

using namespace std;

// Will throw an exception on bad input.
int area(int length, int width)     
{
    // Validate the inputs.
    if(length <= 0 || width <= 0)
    { 
        // Throw an invalid argument exception.
        throw invalid_argument{"Bad argument to area()"};
    }

    int result = length * width;

    // Check for an overflow in the result.
    if (result / length != width)
    {
        // Throw an overflow error exception.
        throw overflow_error{"Overflow occurred in area()"};
    }

    return result;
}


int main()
{
    int l;
    int w;
    cout << "Enter values for length and width:" << endl;
    cin >> l >> w;
    
    // Rewrite the main function so that the exceptions thrown from 
    // the area function are caught and an error message is printed 
    // to the standard output.

    try 
    {
        int result = area(l, w);
        cout << "Area == " << result << endl;
    }
    catch (invalid_argument exc)
    {
        cout << "Bad Arguments!!!" << endl;
    }
    catch (overflow_error exception)
    {
        cout << "Overflow!!!" << endl;
    }

    return 0;
}
