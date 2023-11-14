#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;

// Test file system library. 
int main() 
{
    string directoryPath = "./files"; 

    try 
    {
        for (const filesystem::directory_entry& directoryEntry : filesystem::directory_iterator(directoryPath)) 
        {
            // If this is a regular file and not a directory.
            if (directoryEntry.is_regular_file()) 
            {
                // Print out the file name.
                cout << "filename==" << directoryEntry.path() << endl;

                // Attempt to open the file for reading.
                ifstream file(directoryEntry.path());
                if (file.is_open()) 
                {
                    string line;
                    // Print out each line in the file.
                    while (getline(file, line)) 
                    {
                        cout << "\t" << "fileline==" << line << endl;
                    }
                    file.close();
                } 
                else 
                {
                    cerr << "Error opening file: " << directoryEntry.path() << endl;
                }
            }
        }
    } 
    catch (exception& except) 
    {
        cerr << "Error working with files: " << except.what() << endl;
    }

    return 0;
}
