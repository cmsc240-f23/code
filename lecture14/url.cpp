/*
URL Rules:
For this exercise, we'll consider URL validation for common URL formats, including URLs with or without the "http://" or "https://" scheme. Here are the rules for validating URLs:

    The URL may start with "http://" or "https://" (optional)
    The domain name should consist of letters, digits, hyphens, and periods
    The domain name should have at least one period ('.') to separate domain components
    The URL may contain an optional port number (e.g., ":8080")
    The URL may not contain spaces.

Add a regex pattern that will match the URL rules above as valid.
*/

#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() 
{
    string url;
    cout << "Enter a URL: ";
    cin >> url;

    // Define a regular expression pattern for URL validation
    regex pattern{R"(   YOUR REGEX PATTERN HERE   )"};

    if (regex_match(url, pattern)) 
    {
        cout << "Valid URL!" << endl;
    } 
    else
    {
        cout << "Invalid URL." << endl;
    }

    return 0;
}