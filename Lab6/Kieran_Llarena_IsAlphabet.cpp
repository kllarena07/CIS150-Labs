#include <iostream>
#include <string>
#include <cctype>
using std::cout, std::cin, std::getline, std::string;

string RemoveNonAlpha(string input, int strLength) {
  string modifiedInput;
  for(unsigned int i = 0; i < strLength; ++i) {
    if(isalpha(input[i]))
      modifiedInput += input[i];
  }
  return modifiedInput;
}

int main() {
  string input;

  getline(cin, input);

  int strLength = input.length();

  cout << RemoveNonAlpha(input, strLength) << '\n';
  return 0;
}