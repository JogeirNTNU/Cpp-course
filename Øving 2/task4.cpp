int main() {

  // int a = 5;
  // int &b;
  // int *c;
  // c = &b;
  // *a = *b + *c;
  // &b = 2;

  // fiksa versjon:
  int a = 5;
  int &b = a;
  int *c = &b;
  a = b + *c;
  b = 2;

  // int &b;
  // ein referanse må initialiserast når den deklarerast,
  // b blei aldri bunden til noko

  // c = &b;
  // denne var i seg sjølv gyldig, men b (det c skulle peike til)
  // var ugyldig pga. feilen over

  // *a = *b + *c;
  // a er ein vanleg int, ikkje ein pointer, så *a er ulovlig.
  // b er ein referanse, ikkje ein pointer, så *b er ulovlig av same grunn.
  // c er derimot ein faktisk pointer, så *c er gyldig

  // &b = 2;
  // &b gir adressa til b, og det er ikkje ein lokasjon ein kan
  // tilordne til (ikkje ein lvalue). Referansar kan i tillegg ikkje bindast
  // om etter initialisering
}
