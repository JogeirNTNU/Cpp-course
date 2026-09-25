#include <cstring>

int main() {
  char *line = nullptr; // eller char *line = 0;
  std::strcpy(line, "Dette er en tekst");

  // programmet kræsjer fordi line peiker til ein ikkje eksisterande lokasjon,
  // og strcpy prøver å skrive "Dette er en tekst" til den lokasjonen
}
