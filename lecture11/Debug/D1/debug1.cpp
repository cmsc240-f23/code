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
    int l = 12;
    int w = 7;
    
    cout << "Length == " << l << " Width == " << w << endl;

    int count = 0;
    while (count < 10000)
    {
        count++;
    }

    // Allocate memory on the heap.
    int* arrayPointer = new int[1000];

    arrayPointer[0] = 10;
    arrayPointer[1] = 20;
    arrayPointer[2] = 30;
    arrayPointer[3] = 40;

    char* strArray = new char[3];

    strArray[0] = 'a';
    strArray[1] = 'b';
    strArray[2] = 'c';

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

    // Return memory to the heap.
    delete[] arrayPointer;
    delete[] strArray;

    cout << "End program." << endl;

    return 0;
}