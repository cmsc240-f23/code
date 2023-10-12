#include <iostream>
#include <string>
using namespace std;

// Create a new exception class
class InvalidAreaArgumentsException
{
public:
    InvalidAreaArgumentsException(int l, int w) 
    : length{l}, width{w} 
    { /* Empty constructor block. */ }

    std::string message() 
    {
        return "Bad argument to area(): length == " 
            + std::to_string(length) 
            + " width == "
            + std::to_string(width);
    }
private:
    int length;
    int width;
};

// Will throw an exception on bad input.
int area(int length, int width)     
{
    // Validate the inputs.
	if(length <= 0 || width <= 0)
    { 
        // Throw an exception.
        throw InvalidAreaArgumentsException{length, width};
    }

	return length * width;
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
    catch (InvalidAreaArgumentsException &execpt)
    {
        cout << execpt.message() << endl;
    }

    return 0;
}