#include <iostream>
#include <stdexcept>
using namespace std;

// Will throw an exception on bad input.
int area(int length, int width)     
{
    // Validate the inputs.
	if(length <= 0 || width <= 0)
    { 
        // Throw an exception.
        throw invalid_argument{"Bad argument to area()"};
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
    catch (invalid_argument &ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}