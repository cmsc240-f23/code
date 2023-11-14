#include <chrono>
#include <iostream>
#include <unistd.h>
using namespace std;

int main() 
{
    cout << "Process 2 running..." << endl;
    while (true) 
    {
        sleep(1);
    }
    return 0;
}