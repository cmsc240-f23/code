#include <iostream>
using namespace std;

enum class Month
{
    jan=1, feb=2, mar=3, apr=4, may=5, jun=6, jul=7, aug=8, sep=9, oct=10, nov=11, dec=12
};

int main()
{
    Month thisMonth = Month::sep;

    cout << "thisMonth == " << thisMonth << endl;

    return 0;
}

