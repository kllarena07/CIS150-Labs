#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename TheType> class OrderedList {
   public:
      int Size();
      TheType At(int index);

      int Find(TheType value);
      void Insert(TheType value);
      bool Remove(TheType value);

      void Print();

   private:
      vector<TheType> list;
};

template<typename TheType>
int OrderedList<TheType>::Size() {
   return list.size();
}

template<typename TheType>
TheType OrderedList<TheType>::At(int index) {
   return list[index];
   
}

template<typename TheType>
int OrderedList<TheType>::Find(TheType value) {
   for(unsigned int i = 0; i < list.size(); ++i) {
      if(value == list[i])
         return i;
   }
   return -1;
}

template<typename TheType>
void OrderedList<TheType>::Insert(TheType newItem) {
   unsigned int j;
   unsigned int k;
   if (list.size() == 0) {
      list.push_back(newItem);
      return;
   }

   j = 0;
   while (j < list.size() && newItem > list.at(j)) {
      ++j;
   }

   list.resize(list.size() + 1);

   if (j == list.size()) {
      list.push_back(newItem);
   } else {
      for (k = list.size() - 1; k > j; --k) {
         list.at(k) = list.at(k-1);
      }
      list.at(k) = newItem;
   }
}

template<typename TheType>
bool OrderedList<TheType>::Remove(TheType oldItem) {
   unsigned int j;
   int indx = Find(oldItem);

   if(indx != -1) {
      list.erase(list.begin() + indx);
      return true;
   }

   return false;
}

template<typename TheType>
void OrderedList<TheType>::Print() {
   for (int j = 0; j < Size(); ++j) {
      cout << list.at(j);
      if (j < Size()) {
         cout << " ";
      }
   }
}

int main() {
   // arbitrary list code
   return 0;
}

