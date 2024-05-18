#pragma once

#include <string>

using namespace System;

public ref class BankAccount abstract
{
protected:
    String^ accountHolder;
    double balance;

public:
    BankAccount(String^ holder) : accountHolder(holder), balance(0) {}
    void Credit(double amount) { balance += amount; }
    double GetBalance() { return balance; }
    virtual bool CanDebit(double amount) = 0; // Funcție virtuală pură
    virtual String^ ToString() override {
        return "Titular: " + accountHolder + ", Sold: " + balance;
    }
};