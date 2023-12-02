#include <iostream>
#include <vector>
using std::cout, std::cin, std::vector;

int main() {
  unsigned int numVals;
  unsigned int i;
  int smallestInt;
  int secondSmallestInt;

  cin >> numVals;

  vector<int> input(numVals);

  for(i = 0; i < input.size(); ++i) {
    cin >> input.at(i);
  }

  smallestInt = input.at(0);
  for(i = 0; i < input.size(); ++i) {
    if(smallestInt > input.at(i))
      smallestInt = input.at(i);
  }

  for(i = 0; i < input.size(); ++i) {
    if(smallestInt == input.at(i))
      input.erase(input.begin() + i);
  }

  secondSmallestInt = input.at(0);
  for(i = 0; i < input.size(); ++i) {
    if(secondSmallestInt > input.at(i))
      secondSmallestInt = input.at(i);
  }
  
  cout << smallestInt << " and " << secondSmallestInt << '\n';

  return 0;
}

