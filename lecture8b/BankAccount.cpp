#include "BankAccount.h"

BankAccount::BankAccount(float initialBalance) : balance(initialBalance) { }
    
float BankAccount::operator+(float deposit) 
{
    this->balance += deposit;
    return this->balance;
}

