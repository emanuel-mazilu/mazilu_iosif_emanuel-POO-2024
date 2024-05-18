#pragma once

#include "BankAccount.h"

public ref class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(String^ holder) : BankAccount(holder) {}
    virtual bool CanDebit(double amount) override {
        return balance >= amount;
    }
};