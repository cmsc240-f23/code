#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
using namespace std;

// Function that will be executed by each thread.
void threadFunction(int threadNum) 
{
    cout << "Thread " << threadNum << " starting." << endl;
    
    // Infinite loop to keep the thread alive.
    while (true) 
    {
        // Sleep for one second before continuing with this loop.
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main() 
{
    // Number of threads to create.
    int numberOfThreads = 5;

    // Vector to hold all threads.
    vector<thread> threads; 

    // Create and start threads.
    for (int i = 0; i < numberOfThreads; ++i) 
    {
        threads.push_back(thread{threadFunction, i + 1});
    }

    // Wait for all threads to finish (they won't in this case).
    for (thread& worker : threads) 
    {
        worker.join();
    }

    return 0;
}

// 
// ps -u dbalash      # List processes by user name.
// ps -C thread1      # List processes by command name.
// ps -T -C thread1   # List threads by command name.
// 