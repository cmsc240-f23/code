#include <memory> 
using namespace std;

int main() 
{
    unique_ptr<int> x(new int(5)); // Okay: constructor that takes a pointer
    unique_ptr<int> y(x);          // Error: copy constructor is disabled
    unique_ptr<int> z;             // Okay: default constructor, holds nullptr
    z = x;                         // Error: operator= is disabled 
    return 0;
}

