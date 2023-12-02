#include <iostream>
#include <fstream>
using std::ifstream, std::cout, std::cin, std::string;

int main() {
  ifstream inFS;
  string fileName;
  string fileString;

  cin >> fileName;
  inFS.open("../" + fileName + ".txt");

  if (!inFS.is_open()) {
    cout << "Could not open file." << '\n';
    return 1;
  }

  char desiredChar;
  cin >> desiredChar;

  inFS >> fileString;

  int numRead = 0;
  while (!inFS.fail()) {
    if(fileString[0] == desiredChar) {
      cout << fileString << '\n';
      ++numRead;
    }
    
    inFS >> fileString;
  }
  if (!inFS.eof()) {
    cout << "Input failure before reaching end of file." << '\n';
  }

  if(numRead == 0)
    cout << "No synonyms for " << fileName << " begin with " << desiredChar << '.' << '\n';

  inFS.close();

  return 0;
}

