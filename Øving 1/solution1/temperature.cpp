#include <iostream>

int main() {
  const int length = 5;
  double temperature;

  std::cout << "Insert 5 temperatures" << std::endl;

  int lessThan10{};
  int between10And20{};
  int over20{};

  for (int i = 0; i < length; i++) {
    std::cout << "Temperature nr " << (i + 1) << ": ";
    std::cin >> temperature;

    if (temperature < 10) {
      lessThan10++;
    } else if (temperature >= 10 && temperature <= 20) {
      between10And20++;
    } else {
      over20++;
    }
    std::cout << std::endl;
  }

  std::cout << "Under 10: " << lessThan10 << std::endl;
  std::cout << "Between 10 and 20: " << between10And20 << std::endl;
  std::cout << "Over 20: " << over20 << std::endl;
}
