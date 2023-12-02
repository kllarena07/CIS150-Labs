#include <iostream>
#include <iomanip>
#include <stdexcept>
using std::cin, std::cout, std::cerr, std::runtime_error, std::fixed, std::setprecision;

double StepsToMiles(int numOfSteps) {
  if(numOfSteps < 0) throw runtime_error("Exception: Negative step count entered.");

  return numOfSteps / 2000.0;
}

int main() {
  int userInput;
  cin >> userInput;

  try {
    double numOfMiles = StepsToMiles(userInput);

    cout << fixed << setprecision(2);
    cout << numOfMiles << '\n';
  } catch(runtime_error& err) {
    cerr << err.what() << '\n';
    return -1;
  }

  return 0;
}

