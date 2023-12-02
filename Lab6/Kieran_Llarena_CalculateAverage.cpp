#include <iostream>
#include <vector>
using std::cout, std::vector;

double CalcAverage(vector<int> input) {
  unsigned int i;
  double sum = 0;
  for(i = 0; i < input.size(); ++i) {
    sum += input.at(i);
  }
  double avg = sum / input.size();
  return avg;
}

int main() {
  vector<int> nums; // initialize vector size as well
  // code for vector elements here

  cout << CalcAverage(nums) << '\n';

  return 0;
}