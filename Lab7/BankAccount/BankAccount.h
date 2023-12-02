#pragma once
#include <string>

class BankAccount {
  public:
    BankAccount(std::string nameInp, double savingsInp, double checkingsInp);
    void SetName(std::string newName);
    std::string GetName();
    void SetSavings(double newSavingsAmt);
    double GetSavings();
    void DepositSavings(double amt);
    void WithdrawSavings(double amt);
    void SetChecking(double newCheckingAmt);
    double GetChecking();
    void DepositChecking(double amt);
    void WithdrawCheckings(double amt);
    void TransferToSavings(double amt);
  
  private:
    std::string name;
    double savingsBal;
    double checkingsBal;
};

