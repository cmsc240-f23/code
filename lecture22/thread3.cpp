#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

bool isProcessingComplete = false;

void spinner()
{
    int index = 0;
    char spinnerCharacters[] = {'|', '/', '-', '\\'};
    cout << "Processing please wait ";
    cout << "\e[?25l" << flush; // Turn off the cursor
    while (!isProcessingComplete)
    {
        cout << spinnerCharacters[index] << flush;
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "\b";  // Backspace
        index = (index + 1) % 4; 
    }
    cout << "\e[?25h" << flush; // Turn on the cursor
    cout << endl;
}

void intensiveProcessing()
{
    // Important processing happens here...
    this_thread::sleep_for(chrono::seconds(20));
}

int main() 
{
    // Start the thread that run the spinner function.
    thread spin{spinner};

    // Start a thread that does some important processing.
    thread process{intensiveProcessing};
    
    // Wait for the processing to complete. 
    process.join();

    // Mark the processing complete.
    isProcessingComplete = true;

    // Wait for the spinner to stop.
    spin.join();

    return 0;
}
