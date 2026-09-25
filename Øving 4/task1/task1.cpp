#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<double> numbers(5);

  numbers[0] = 1.0;
  numbers[1] = 2.0;
  numbers[2] = 3.0;
  numbers[3] = 4.0;
  numbers[4] = 5.0;

  std::cout << "fyrste nummer: " << numbers.front()
            << ", siste nummer: " << numbers.back() << std::endl;

  numbers.emplace(numbers.begin() + 1, 3.0);

  std::cout << numbers.front() << std::endl;
  double value = 3.0;

  auto it = std::find(numbers.begin(), numbers.end(), value);

  if (it != numbers.end()) {
    std::cout << *it;
  } else {
    std::cout << "value " << value << " is never found";
  }
}
