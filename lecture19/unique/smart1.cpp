#include <iostream>
#include <memory> 
using namespace std;

void Leaky() 
{
    // A pointer to a heap-allocated integer.
    int* rawPointer = new int(42); 

    /*  ... some processing ... */

    cout << *rawPointer << endl;

} // After return: Never used delete, therefore leak. 


void NotLeaky() 
{
    // A smart pointer wrapped heap-allocated integer.
    unique_ptr<int> smartPointer(new int(25));

    /*  ... some processing ... */

    cout << *smartPointer << endl;

} // After return: Never used delete, but no leak.


int main() 
{
    Leaky();    
    NotLeaky(); 
    return 0;
}


