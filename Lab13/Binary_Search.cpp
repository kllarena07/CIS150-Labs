#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Read integers from input and store them in a vector.
// Return the vector.
vector<int> ReadIntegers() {
   int size;
   cin >> size;
   vector<int> integers(size);
   for (int i = 0; i < size; ++i) {               // Read the numbers
      cin >> integers[i];
      }
   sort(integers.begin(), integers.end());
   return integers;
}

int comparisons = 0;
int recursions = 0;

int BinarySearch(int target, vector<int> &integers, int lower, int upper) {
   int middleIndex = (upper + lower) / 2;

   ++comparisons;
   if(target == integers[middleIndex]) {
      ++recursions;
      return middleIndex;
   }

   if(target < integers[middleIndex]) {
      if(middleIndex > lower) {
         ++comparisons;
         ++recursions;
         return BinarySearch(target, integers, lower, middleIndex - 1);
      }
   } else if(target > integers[middleIndex]) {
      if(middleIndex < upper) {
         ++comparisons;
         ++recursions;
         return BinarySearch(target, integers, middleIndex + 1, upper);
      }
   }

   ++recursions;
   return -1;
}

int main() {
   int target;
   int index;

   vector<int> integers = ReadIntegers();

   cin >> target;

   index = BinarySearch(target, integers, 0, integers.size() - 1);
   printf("index: %d, recursions: %d, comparisons: %d\n",
          index, recursions, comparisons);

   return 0;
}

