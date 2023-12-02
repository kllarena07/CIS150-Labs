#include <iostream>
#include <string>
using std::cout, std::cin, std::string;

int main() {
  string phoneNumber;

  cin >> phoneNumber;

  cout << '(' << phoneNumber.substr(0, 3) << ')';
  cout << ' ' << phoneNumber.substr(3, 3) << '-';
  cout << phoneNumber.substr(6, 4) << '\n';

  return 0;
}

