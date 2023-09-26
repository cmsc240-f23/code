#include <iostream>
#include "Logger.h"
using namespace std;

// Constructor: open the file for logging
Logger::Logger(const string& filename) 
{
    logFile.open(filename, ios::app);  // Open in append mode
    if (!logFile.is_open()) 
    {
        cerr << "Failed to open log file: " << filename << endl;
    }
}

// Destructor: close the log file
Logger::~Logger() 
{
    if (logFile.is_open()) 
    {
        logFile.close();
        cout << "Log file closed." << endl;
    }
}

// Function to write a message to the log
void Logger::writeLog(const string& message) 
{
    if (logFile.is_open()) 
    {
        logFile << message << endl;
    }
}


int main() {

    // Start a block scope
    {
        Logger appLog("application.log");
        appLog.writeLog("Application started.");
        appLog.writeLog("Performing some operations...");

        // Because we are leaving the block scope the appLog's  
        // destructor will be called here, closing the log file
    }

    cout << "Back in main function after the block." << endl;

    return 0;
}
