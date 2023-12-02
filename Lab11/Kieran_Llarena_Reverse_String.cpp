#include <iostream>
#include <string>
#include <vector>
using std::cout, std::cin, std::getline, std::string, std::vector;

void iterate(string input, int n, vector<char> &charVector) {
  if(n > 0) {
    charVector.push_back(input[n - 1]);
    iterate(input, n - 1, charVector);
  }
}

string ReverseString(string input) {
  int inputLength = input.length();

  vector<char> charVector;

  iterate(input, inputLength, charVector);

  string result(charVector.begin(), charVector.end());

  return result;
}

int main() {
  string input, result;

  getline(cin, input);
  result = ReverseString(input);
  cout << "Reverse of \"" << input << "\" is \"" << result << "\"." << '\n';

  return 0;
}

