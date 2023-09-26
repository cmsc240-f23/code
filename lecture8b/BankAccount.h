#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
public:  
    BankAccount(float balance);  // Constructor
    float operator+(float deposit);   // Overload +
    float getBalance() const { return balance; }
private:
    int accountId;
    float balance;
};

#endif