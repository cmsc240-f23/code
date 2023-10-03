#include <iostream>
using namespace std;

// Error status indicator.
int error_number = 0;

// Will set error_number to 7 for bad input.
int area(int length, int width)     
{
    // Validate the inputs.
	if(length <= 0 || width <= 0)
    { 
        // Set the error status.
        error_number = 7;
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
    
    // Check error_number to see if an error occurred.
	if (error_number == 7)
    {
        error("Bad area computation.");
    }

    cout << "Area == " << result << endl;

    return 0;
}






