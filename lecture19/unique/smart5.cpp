#include <memory>
using namespace std;

void processPointers()
{

    // Trying to get two pointers to the same thing
    unique_ptr<int> x(new int(12));
    unique_ptr<int> y(x.get());

} // Error: Double delete upon return!


int main() 
{
    processPointers();
    return 0;
}