#pragma once

#include "BankAccount.h"

public ref class CurrentAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    CurrentAccount(String^ holder, double limit) : BankAccount(holder), overdraftLimit(limit) {}
    virtual bool CanDebit(double amount) override {
        return balance + overdraftLimit >= amount;
    }
    String^ ToString() override {
        return BankAccount::ToString() + ", Limită descoperire de cont: " + overdraftLimit;
    }
};


