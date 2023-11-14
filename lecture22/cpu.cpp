#include <iostream>
#include <thread>
using namespace std;

// $ lscpu
// $ nproc
int main()
{
    // Returns the number of concurrent threads supported by the implementation.
    int concurrentThreadsSupportedByThisComputer = thread::hardware_concurrency();

    cout << "This computer supports " 
        << concurrentThreadsSupportedByThisComputer 
        << " concurrent threads." << endl;

    return 0;
}

