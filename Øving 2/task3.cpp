#include <iostream>

int main() {
  char text[5];          // lager text som har 5 chars
  char *pointer = text;  // pointer refererer til text
  char search_for = 'e'; // ny char search_for får verdi 'e'
  std::cin >> text;
  while (*pointer != search_for) {
    *pointer = search_for;
    pointer++;
  }

  // while-loop stopper aldri fordi den ikkje har noko som sei den skal stoppe
  // dersom den går forbi posisjon 5 på text, dermed vil den lese og skrive alle
  // minnelokasjoner til 'e'. Den vil gå gjennom alle minnelokasjoner i
  // programmet fram til den finn e, eller kræsjer når den har gått utanfor
  // minnet
  //
  // std::cin hindrer ikkje ein brukar å skrive inn meir enn 4 chars,
  // sjølv om text berre har plass til 4 chars pluss null-terminator
  //
}
