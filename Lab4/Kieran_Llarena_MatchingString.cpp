#include <iostream>
#include <string>
using std::cout, std::cin, std::string;

int main() {
  string inp1;
  string inp2;

  cin >> inp1 >> inp2;

  int numOfMatchingChars = 0;

  for(unsigned int i = 0; i < inp1.length(); i++) {
    if(inp1[i] == inp2[i])
        numOfMatchingChars++;
  }

  if(numOfMatchingChars == 1) {
    cout << "The output is: " << numOfMatchingChars << " characters matches" << '\n';
  } else {
    cout << "The output is: " << numOfMatchingChars << " characters match" << '\n';
  }

  return 0;
}