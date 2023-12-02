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

int IndexOf(IntNode* headNode, int targetValue) {
  int size = 0;

  IntNode* currNode = headNode->GetNext();
  while(currNode != nullptr) {
    ++size;
    currNode = currNode->GetNext();
  }
  
  if(targetValue > size) {
    return -1;
  }

  int index = 0;
  if(size > 0) {
    IntNode* currNode = headNode->GetNext();
    while(currNode->GetNodeData() != targetValue) {
      ++index;
      currNode = currNode->GetNext();
    }
  } else {
    return -1;
  }


  return (index - 1);
}

int main() {
  IntNode* headNode = new IntNode(-1);
  IntNode* currNode;
  IntNode* lastNode;

  lastNode = headNode;

  unsigned int maxCount = 0;
  cout << "Enter the number of items to add:" << '\n';
  cin >> maxCount;

  for(unsigned int i = 0; i < maxCount; ++i) {
    currNode = new IntNode(i);
    lastNode->InsertAfter(currNode);
    lastNode = currNode;
  }

  int targetValue;
  cout << "Enter the number that you want to target:" << '\n';
  cin >> targetValue;

  cout << "The index of the value " << targetValue << " is " << IndexOf(headNode, targetValue) << '\n';
  
  return 0;
}