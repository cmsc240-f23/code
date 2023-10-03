#include <iostream>
#include <stdexcept>
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
    
    try 
    {
        int result = area(l, w);
        cout << "Area == " << result << endl;
    }
    catch (exception &ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}