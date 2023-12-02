#include <iostream>
using std::cout, std::cin;

int main() {
  int choice;

  cin >> choice;

  switch(choice) {
    case 1:
    {
      const double PI = 3.14159;
      double radius;

      cin >> radius;

      cout << PI * radius * radius << '\n';
    }
    break;

    case 2:
    {
      double length;
      double width;

      cin >> length;
      cin >> width;

      cout << length * width << '\n';
    }
    break;

    case 3:
    {
      double base;
      double height;

      cin >> base;
      cin >> height;

      cout << 0.5 * base * height << '\n';
    }
    break;

    case 4:
      cout << "Program ending!" << '\n';
    break;

    default:
      cout << "The valid choices are 1 through 4! Run the program again." << '\n';
    break;
  }
  
  return 0;
}