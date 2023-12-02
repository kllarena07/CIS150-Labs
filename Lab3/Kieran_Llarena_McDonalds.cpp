#include <iostream>
using std::cin, std::cout;

int main() {
  int choice;

  cin >> choice;

  switch(choice) {
    case 1:
      cout << "Hamburger is $4.00" << '\n';
    break;

    case 2:
      cout << "Cheeseburger is $5.00" << '\n';
    break;

    case 3:
      cout << "Fries is $3.00" << '\n';
    break;

    case 4:
      cout << "Soda is $2.00" << '\n';
    break;

    case 5:
      cout << "Water is $1.00" << '\n';
    break;

    default:
      cout << "Your choice is invalid! Run the program again!" << '\n';
    break;
  }

  return 0;
}

