#include <iostream>
using namespace std;

static float global = 3.14;


void function() 
{
    cout << "In function  " << global << endl;
}

// int main()
// {

//     cout << "In main " << global << endl;

//     {
//         cout << "In block " << global << endl;
//     }

//     function();


// }