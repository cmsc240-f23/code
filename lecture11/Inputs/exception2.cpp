#include <iostream>
using namespace std;

// Create a new exception class
class InvalidAreaArgumentsException
{
    // If you don't explicitly define a constructor in a C++ class, 
    // the compiler provides a default constructor automatically
};

// Will throw an exception on bad input.
int area(int length, int width)     
{
    // Validate the inputs.
	if(length <= 0 || width <= 0)
    { 
        // Throw an exception.
        throw InvalidAreaArgumentsException{};
    }

	return length * width;
}

// Calls the area function after reducing 
// the length and width by frame size.
int framedArea(int length, int width)
{
    int frameSize = 2;

    // Do not catch exception here.
    int result = area(length - frameSize, width - frameSize);

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
        int result = framedArea(l, w);
        cout << "Area == " << result << endl;
    }
    catch (InvalidAreaArgumentsException &ex)
    {
        cout << "Bad argument to area()" << endl;
    }

    return 0;
}