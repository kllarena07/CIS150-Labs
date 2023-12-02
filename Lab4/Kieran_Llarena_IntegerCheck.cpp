#include <iostream>
#include <string>
#include <cctype>
using std::cout, std::cin, std::string;

int main() {
  string input;
  cin >> input;

  int numOfNonDigits = 0;

  for(unsigned int i = 0; i < input.length(); ++i) {
    if(!isdigit(input[i]))
      numOfNonDigits++;
  }

  const string output = (numOfNonDigits == 0) ? "Yes" : "No";

  cout << "The output is: " << output << '\n';

  return 0;
}