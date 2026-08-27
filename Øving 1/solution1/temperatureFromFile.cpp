#include <cstdlib>
#include <fstream>
#include <iostream>

void read_temperatures(double temperatures[], int length);

int main() {
  const int length = 5;
  double temperatures[length];

  read_temperatures(temperatures, length);

  int lessThan10{};
  int between10And20{};
  int over20{};

  for (int i = 0; i < length; i++) {
    std::cout << "Temperature nr " << (i + 1) << ": ";
    std::cout << temperatures[i];

    if (temperatures[i] < 10) {
      lessThan10++;
    } else if (temperatures[i] >= 10 && temperatures[i] <= 20) {
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

void read_temperatures(double temperatures[], int length) {
  const char temperatureFile[] = "temperatureFile.dat";
  std::ifstream file;
  file.open(temperatureFile);
  if (!file) {
    std::cout << "Error opening file." << std::endl;
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < length; i++) {
    file >> temperatures[i];
  }

  file.close();
}
