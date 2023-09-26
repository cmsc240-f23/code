#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
    BankAccount myAccnt(100);

    cout << "bank account balance == " << myAccnt.getBalance() << endl;
    
    myAccnt + 42;  // Uses the overloaded + operator

    cout << "bank account balance == " << myAccnt.getBalance() << endl;
}




