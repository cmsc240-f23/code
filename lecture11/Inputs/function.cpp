#include <iostream>
using namespace std;

// Returns a negative value for bad input.
int area(int length, int width)     
{
    // Validate the inputs.
	if(length <= 0 || width <= 0)
    { 
        // Return an error value.
        return -1;
    }

	return length * width;
}


int error(string message)
{
    cerr << "Error: " << message << endl; 
    exit(1);
}

int main()
{
    int l;
    int w;
    cout << "Enter values for length and width:" << endl;
    cin >> l >> w;
    
    int result = area(l, w);

    // Check the result for the -1 error return value.
	if (result < 0)
    {
        error("Bad area computation.");
    }

    cout << "Area == " << result << endl;

    return 0;
}






