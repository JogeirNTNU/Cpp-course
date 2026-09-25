
#include <iostream>
#include <ostream>

int main() {
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  std::cout << "i = " << i << " address = " << &i << std::endl;
  std::cout << "j = " << j << " address = " << &j << std::endl;
  std::cout << "p = " << *p << " address = " << &p << std::endl;
  std::cout << "q = " << *q << " address = " << &q << std::endl;

  *p = 7;

  std::cout << "\n";
  std::cout << "i = " << i << " address = " << &i << std::endl;
  std::cout << "j = " << j << " address = " << &j << std::endl;
  std::cout << "p = " << *p << " address = " << &p << std::endl;
  std::cout << "q = " << *q << " address = " << &q << std::endl;

  *q += 4;

  std::cout << "\n";
  std::cout << "i = " << i << " address = " << &i << std::endl;
  std::cout << "j = " << j << " address = " << &j << std::endl;
  std::cout << "p = " << *p << " address = " << &p << std::endl;
  std::cout << "q = " << *q << " address = " << &q << std::endl;

  *q = *p + 1;

  std::cout << "\n";
  std::cout << "i = " << i << " address = " << &i << std::endl;
  std::cout << "j = " << j << " address = " << &j << std::endl;
  std::cout << "p = " << *p << " address = " << &p << std::endl;
  std::cout << "q = " << *q << " address = " << &q << std::endl;

  p = q;

  std::cout << "\n";
  std::cout << "i = " << i << " address = " << &i << std::endl;
  std::cout << "j = " << j << " address = " << &j << std::endl;
  std::cout << "p = " << *p << " address = " << &p << std::endl;
  std::cout << "q = " << *q << " address = " << &q << std::endl;

  std::cout << *p << " " << *q << std::endl;

  return 0;
}
