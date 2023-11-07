#include <iostream>
#include <memory>
using namespace std;

int main() 
{
    unique_ptr<int> x(new int(5));
    cout << "x: " << x.get() << endl;

    // x releases ownership to y
    unique_ptr<int> y(x.release()); 
    cout << "x: " << x.get() << endl;
    cout << "y: " << y.get() << endl;
   
    unique_ptr<int> z(new int(10));
    // y transfers ownership of its pointer to z.
    // z's old pointer was deleted in the process.
    z.reset(y.release());

    return 0;
}

