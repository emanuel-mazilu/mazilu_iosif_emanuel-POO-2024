#pragma once
#include "LoyaltyScheme.h"
ref class CreditCardAccount
{
public:
	literal System::String^ name = "Super Platinum Card";
	static CreditCardAccount();
	static int numberOfAccounts = 0;
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	void RedeemLoyaltyPoints();
private:
	LoyaltyScheme^ scheme;
	static double interestRate;
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
};

