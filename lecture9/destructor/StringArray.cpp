#include <iostream>
#include <string>
#include "StringArray.h"
using namespace std;

// Constructor: allocate memory for the array
StringArray::StringArray(int size) : length(size) 
{
    strings = new string[size];
}

// Destructor: free the allocated memory
StringArray::~StringArray() 
{
    delete[] strings;
    cout << "Memory for string array released." << endl;
}

// Set a string at a specific index
void StringArray::setStringAt(int index, const string& value) 
{
    if (index < length) 
    {
        strings[index] = value;
    } 
    else 
    {
        cerr << "Index " << index << " out of bounds!" << endl;
    }
}

// Get a string from a specific index
string StringArray::getStringAt(int index) const 
{
    if (index < length) 
    {
        return strings[index];
    } 
    else 
    {
        cerr << "Index " << index << " out of bounds!" << endl;
        return "";
    }
}

int main() 
{
    // Start a block scope
    {
        // Allocate space for 5 strings in a StringArray instance
        StringArray strArray(5); 
        strArray.setStringAt(0, "Hello");
        strArray.setStringAt(1, "Spiders");
        cout << strArray.getStringAt(0) << " " << strArray.getStringAt(1) << endl;

        // Because we are leaving the block scope the strArray's  
        // destructor will be called here, freeing the allocated memory
    }

    cout << "Back in main function after the block." << endl;

    return 0;
}