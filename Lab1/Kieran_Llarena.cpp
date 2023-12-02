#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double COST_PER_PIZZA = 14.95;
  const unsigned int SLICES_PER_PERSON = 2;
  const unsigned int SLICES_PER_PIZZA = 12;
  
  unsigned int numPeople;

  cin >> numPeople;

  unsigned int numPizzas = ceil(numPeople * SLICES_PER_PERSON / static_cast<double>(SLICES_PER_PIZZA));
  double totalPizzaCost = numPizzas * COST_PER_PIZZA;

  cout << fixed << setprecision(2);

  cout << "People: " << numPeople << endl;
  cout << "Pizza(s) needed: " << numPizzas << endl;
  cout << "Cost for " << numPizzas << " pizza(s): $" << totalPizzaCost << endl;

  return 0;
}

