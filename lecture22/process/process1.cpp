#include <chrono>
#include <iostream>
#include <unistd.h>
using namespace std;

int main() 
{
    cout << "Process 1 running..." << endl;
    while (true) 
    {
        sleep(1);
    }
    return 0;
}

// ps -C process1 -C process2