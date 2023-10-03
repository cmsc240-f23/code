#include <iostream>
using namespace std;

int area(int length, int width)
{
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

    // Caller validates the inputs
    if (l <= 0)
    {
        error("Non-positive length value.");
    }
    
    if (w <= 0) 
    {
        error("Non-positive width value.");
    }
    
    int result = area(l, w);

    cout << "Area == " << result << endl;

    return 0;
}






