

#include <iostream>
#include <vector>

int find_sum(const int *table, int length) {

  int sum = 0;

  for (int i = 0; i < length; i++) {
    sum += *table;
    table++;
  }
  return sum;
}

int main() {

  std::vector<int> table(20);

  for (int i = 0; i < table.size(); i++) {
    table[i] = i + 1;
  }

  std::cout << "Dei fyrst 10 tala: " << find_sum(&table[0], 10) << std::endl;
  std::cout << "Dei neste 5 tala: " << find_sum(&table[10], 5) << std::endl;
  std::cout << "Dei siste 5 tala: " << find_sum(&table[table.size() - 5], 5)
            << std::endl;
}
