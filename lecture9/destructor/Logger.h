#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>

class Logger 
{
public:
    // Constructor: open the file for logging
    Logger(const std::string& filename);

    // Destructor: close the log file
    ~Logger();

    void writeLog(const std::string& message);
private:
    std::ofstream logFile;    
};

#endif