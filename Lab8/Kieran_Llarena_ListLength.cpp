#include <iostream>
using std::cout, std::cin;

class IntNode {
  public:
    IntNode(int dataInit);
    int GetNodeData();
    IntNode* GetNext();
    void InsertAfter(IntNode* newNode);

  private:
    int dataVal;
    IntNode* nextNodePtr;
};

IntNode::IntNode(int dataInit) {
  this->dataVal = dataInit;
  nextNodePtr = nullptr;
}

int IntNode::GetNodeData() {
  return this->dataVal;
}

IntNode* IntNode::GetNext() {
  return this->nextNodePtr;
}

void IntNode::InsertAfter(IntNode* newNode) {
  IntNode* tempNext = this->nextNodePtr;
  this->nextNodePtr = newNode;
  newNode->nextNodePtr = tempNext;
}

int GetCount(IntNode* headNode) {
  int count = 0;

  IntNode* currNode = headNode->GetNext();
  while(currNode != nullptr) {
    ++count;
    currNode = currNode->GetNext();
  }

  return count;
}

int main() {
  IntNode* headNode = new IntNode(-1);
  IntNode* currNode;
  IntNode* lastNode;

  lastNode = headNode;

  int maxCount = 0;
  cout << "Enter the number of items to add:" << '\n';
  cin >> maxCount;

  for(unsigned int i = 0; i < maxCount; ++i) {
    currNode = new IntNode(i);
    lastNode->InsertAfter(currNode);
    lastNode = currNode;
  }

  // this is called a linked list
  cout << "There are " << GetCount(headNode) << " item(s) in this linked list" << '\n';
  
  return 0;
}