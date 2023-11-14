#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;


int main() 
{
    string directoryPath = "./files"; 

    try {
        for (const filesystem::directory_entry& entry : filesystem::directory_iterator(directoryPath)) 
        {
            if (entry.is_regular_file()) 
            {
                cout << "File: " << entry.path() << endl;

                ifstream file(entry.path());
                if (file.is_open()) 
                {
                    string line;
                    while (getline(file, line)) 
                    {
                        cout << "\t" << line << endl;
                    }
                    file.close();
                } 
                else 
                {
                    cerr << "Error opening file: " << entry.path() << endl;
                }
            }
        }
    } 
    catch (const exception& e) 
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
