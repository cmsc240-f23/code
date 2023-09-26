#ifndef STRINGARRAY_H
#define STRINGARRAY_H

#include <iostream>
#include <string>

class StringArray 
{
public:
    // Constructor: allocate memory for the array
    StringArray(int size);

    // Destructor: free the allocated memory
    ~StringArray();

    void setStringAt(int index, const std::string& value);
    std::string getStringAt(int index) const;
private:
    std::string* strings;
    int length;    
};

#endif