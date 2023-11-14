#include <iostream>
#include <thread>

using namespace std;

// Function to print 'A'
void printA() 
{
    for (int i = 0; i < 500; i++) 
    {
        cout << "A";
    }
}

// Function to print 'B'
void printB() 
{
    for (int i = 0; i < 500; i++) 
    {
        cout << "B";
    }
}

int main() 
{
    // Create two threads.
    thread worker1{printA};
    thread worker2{printB};

    worker1.join();
    worker2.join();

    cout << endl;

    return 0;
}
