#include "Calculator.h"

void Calculator::Add(double val) {
  currentVal += val;
}
void Calculator::Subtract(double val) {
  currentVal -= val;
}
void Calculator::Multiply(double val) {
  currentVal *= val;
}
void Calculator::Divide(double val) {
  currentVal /= val;
}
void Calculator::Clear() {
  currentVal = 0.0;
}
double Calculator::GetValue() {
  return currentVal;
}