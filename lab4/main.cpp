#include "CurrentAccount.h"
#include "SavingsAccount.h"
#include <iostream>

using namespace std;

int main() {
    CurrentAccount^ currentAccount = gcnew CurrentAccount("Ion Popescu", 1000);
    SavingsAccount^ savingsAccount = gcnew SavingsAccount("Maria Ionescu");

    currentAccount->Credit(500);
    savingsAccount->Credit(2000);

    Console::WriteLine(currentAccount->ToString());
    Console::WriteLine(savingsAccount->ToString());

    bool debitResult = currentAccount->CanDebit(1200);
    cout << "Debit permis (cont curent): " << debitResult << endl;

    debitResult = savingsAccount->CanDebit(2500);
    cout << "Debit permis (cont de economii): " << debitResult << endl;

    return 0;
}