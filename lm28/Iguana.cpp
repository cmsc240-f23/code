 #include "Iguana.h"
 #include <iostream>
 #include <string>

 using namespace std; 

    Iguana::Iguana(string name, int age, string species, float size)
    : Animal(name,age), species{species}, size{size}
    {
        cout << "Iguana constructor..." << endl;
    }

    void Iguana::speak()
    {
        cout << "*yoshi sound*" << endl;
    }

    void Iguana::measure()
    {
        cout << "The iguana is " << size << " inches long" << endl;
    }

    void Iguana::grow()
    {
        size++;
    }