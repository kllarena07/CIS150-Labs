#include <iostream>
using std::cout, std::cin;

int main() {
  int height;

  cin >> height;

  for(unsigned int i = height; i > 0; --i) {
    for(unsigned int j = 0; j < i; ++j) {
      cout << "* ";
    }
    cout << '\n';
  }

  return 0;
}