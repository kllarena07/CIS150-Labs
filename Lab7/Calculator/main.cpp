#include <iostream>
#include <iomanip>
#include "Calculator.h"
using std::cout, std::cin, std::fixed, std::setprecision;

void printCalcVal(Calculator &calc) {
  cout << calc.GetValue() << '\n';
}

int main() {
  Calculator calc;
  double num1;
  double num2;

  cin >> num1;
  cin >> num2;

  cout << fixed << setprecision(1);
  
  printCalcVal(calc);

  calc.Add(num1);
  printCalcVal(calc);

  calc.Multiply(3);
  printCalcVal(calc);

  calc.Subtract(num2);
  printCalcVal(calc);

  calc.Divide(2);
  printCalcVal(calc);

  calc.Clear();
  printCalcVal(calc);

  return 0;
}