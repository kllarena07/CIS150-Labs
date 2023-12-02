#include <iostream>
#include <iomanip>
#include "BankAccount.h"
using std::cout, std::fixed, std::setprecision;

int main() {
  BankAccount account("Maria", 1000.00, 1000.00);
  account.SetChecking(500.00);
  account.SetSavings(500.00);
  account.WithdrawSavings(100.00);
  account.WithdrawCheckings(100.00);
  account.TransferToSavings(300.00);

  cout << account.GetName() << '\n';
  cout << fixed << setprecision(2);
  cout << account.GetChecking() << '\n';
  cout << account.GetSavings() << '\n';

  return 0;
}