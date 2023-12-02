#include <iostream>
#include <vector>
using std::cout, std::cin, std::vector;

int main() {
  unsigned int numVals;
  unsigned int i;

  cin >> numVals;

  vector<int> input(numVals);
  vector<int> modified(numVals);

  for(i = 0; i < input.size(); ++i) {
    cin >> input.at(i);
  }

  modified.at(0) = input.back();
  for(i = 1; i < input.size(); ++i) {
    modified.at(i) = input.at(i-1);
  }

  for(i = 0; i < modified.size(); ++i) {
    cout << modified.at(i) << ' ';
  }
  cout << '\n';

  return 0;
}

