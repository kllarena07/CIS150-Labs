#include <iostream>
using std::cout, std::cin;

int main() {
  int numbOfOdds = 0;

  for(int i = 0; i < 4; i++) {
    int userInput;
    cin >> userInput;

    if(userInput % 2 != 0)
      numbOfOdds++;
  }

  cout << numbOfOdds << '\n';
  
  return 0;
}

