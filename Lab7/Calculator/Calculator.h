#pragma once

class Calculator {
  public:
    void Add(double val);
    void Subtract(double val);
    void Multiply(double val);
    void Divide(double val);
    void Clear();
    double GetValue();

  private:
    double currentVal;
};