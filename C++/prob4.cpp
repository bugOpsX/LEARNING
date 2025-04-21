//Implement a program with virtual functions, showing how
//derived class functions override base class functions using
//runtime polymorphism.

#include <iostream>
using namespace std;

// Base class
class BankAccount {
public:
    virtual void accountType() {
        cout << "This is a general bank account." << endl;
    }
};

// Derived class 1
class SavingsAccount : public BankAccount {
public:
    void accountType() override {
        cout << "This is a Savings Account. Interest is applied." << endl;
    }
};

// Derived class 2
class CurrentAccount : public BankAccount {
public:
    void accountType() override {
        cout << "This is a Current Account. No interest." << endl;
    }
};

int main() {
    BankAccount* account;

    SavingsAccount sa;
    CurrentAccount ca;

    account = &sa;
    account->accountType();  // Output from SavingsAccount

    account = &ca;
    account->accountType();  // Output from CurrentAccount

    return 0;
}


