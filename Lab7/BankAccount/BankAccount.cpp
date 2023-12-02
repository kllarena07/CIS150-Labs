#include <iostream>
#include <string>
#include "BankAccount.h"

BankAccount::BankAccount(std::string nameInp, double savingsInp, double checkingsInp) {
  name = nameInp;
  savingsBal = savingsInp;
  checkingsBal = checkingsInp;
};

void BankAccount::SetName(std::string newName) {
  name = newName;
};

std::string BankAccount::GetName() {
  return name;
};

void BankAccount::SetSavings(double newSavingsAmt) {
  savingsBal = newSavingsAmt;
};

double BankAccount::GetSavings() {
  return savingsBal;
};

void BankAccount::DepositSavings(double amt) {
  if(amt < 0) {
    std::cout << "Please provide a positive amount" << '\n';
    return;
  }

  savingsBal += amt;
};

void BankAccount::WithdrawSavings(double amt) {
  if(amt < 0) {
    std::cout << "Please provide a positive amount" << '\n';
    return;
  }

  savingsBal -= amt;
};

void BankAccount::SetChecking(double amt) {
  if(amt < 0) {
    std::cout << "Please provide a positive amount" << '\n';
    return;
  }

  checkingsBal = amt;
};

double BankAccount::GetChecking() {
  return checkingsBal;
};

void BankAccount::DepositChecking(double amt) {
  if(amt < 0) {
    std::cout << "Please provide a positive amount" << '\n';
    return;
  }

  checkingsBal += amt;
};

void BankAccount::WithdrawCheckings(double amt) {
  if(amt < 0) {
    std::cout << "Please provide a positive amount" << '\n';
    return;
  }

  checkingsBal -= amt;
};

void BankAccount::TransferToSavings(double amt) {
  if(amt < 0) {
    std::cout << "Please provide a positive amount" << '\n';
    return;
  }

  checkingsBal -= amt;
  savingsBal += amt;
};