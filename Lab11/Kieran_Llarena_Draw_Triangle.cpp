#include <iostream>
using std::cout, std::cin;

void DrawTriangle(int baseLength, int originalBaseLength) {
  if(baseLength < originalBaseLength) {
    for(unsigned int i = 0; i < (originalBaseLength - baseLength) / 2; ++i) {
      cout << ' ';
    }
  }

  for(unsigned int i = 0; i < baseLength; ++i) {
    cout << '*';
  }
  cout << '\n';

  if(baseLength != 1) {
    baseLength -= 2;
    DrawTriangle(baseLength, originalBaseLength);
  }
}

int main() {
  int inputNum;
  cin >> inputNum;
  DrawTriangle(inputNum, inputNum);

  return 0;
}