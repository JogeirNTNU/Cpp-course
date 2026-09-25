#include <iostream>

int main() {

  double number;
  double *refNum = &number;
  double &anotherNumber = number;

  number = 1;

  std::cout << number << "\n";

  *refNum = 2;

  std::cout << number << "\n";

  anotherNumber = 3;

  std::cout << number << "\n";
}
