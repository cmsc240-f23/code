#include <iostream>
#include <stdexcept>
using namespace std;

#define DEBUG_ON true

// Create a debug function to output only if debug is on.
void debug(string message)
{
    if (DEBUG_ON)
    {
        cerr << message << endl;
    }
}


// Will throw an exception on bad input.
int area(int length, int width)     
{
    debug("Begin area");

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

    debug("Return from area with result == " + to_string(result));

	return result;
}

// Calls the area function after reducing 
// the length and width by frame size.
int framedArea(int length, int width)
{
    debug("Begin framedArea");

    int frameSize = 2;

    // Do not catch exception here.
    int result = area(length - frameSize, width - frameSize);

    debug("Return from framedArea with result == " + to_string(result));

    return result;
}

int main()
{
    debug("Begin main");

    int l = 12;
    int w = 7;
    
    debug("Length == " + to_string(l) + " Width == " + to_string(w));

    try 
    {
        int result = framedArea(l, w);

        cout << "Area == " << result << endl;
    }
    catch (invalid_argument &ex)
    {
        cout << ex.what() << endl;
    }
    catch (overflow_error &ex)
    {
        cout << ex.what() << endl;
    }

    debug("End main");

    return 0;
}