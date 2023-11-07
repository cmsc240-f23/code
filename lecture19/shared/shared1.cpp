#include <iostream> 
#include <memory> 
using namespace std;

void function(shared_ptr<int>& shared)
{
    shared_ptr<int> second = shared;     // reference count: 2
    cout << *second << endl;
}

int main() 
{
    shared_ptr<int> first(new int(10));  // reference count: 1

    function(first);

    cout << *first << endl;              // reference count: 1

    return 0;
}                                        // reference count: 0



