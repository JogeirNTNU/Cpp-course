#include <iostream>
#include <string>

int main() {
  std::string word1;
  std::string word2;
  std::string word3;

  std::cout << "Skriv inn word1: ";
  std::cin >> word1;
  std::cout << std::endl << "Skriv inn word2: ";
  std::cin >> word2;
  std::cout << std::endl << "Skriv inn word3: ";
  std::cin >> word3;

  std::string sentence = word1 + " " + word2 + " " + word3 + ".";
  std::cout << sentence << "\n";

  std::cout << "Lengden på word1 er " << word1.length() << "\n";
  std::cout << "Lengden på word1 er " << word2.length() << "\n";
  std::cout << "Lengden på word1 er " << word3.length() << "\n";

  std::string sentence2 = sentence;

  if (sentence2.length() > 10) {
    if (sentence2.length() > 13) {
      sentence2.replace(10, 3, "x");
    } else {
      sentence2.replace(10, sentence2.length() - 10, "x");
    }
  }
  std::cout << sentence << "\n" << sentence2 << "\n";

  std::string sentence_start;
  if (sentence.length() >= 5) {
    sentence_start = sentence.substr(0, 5);
  } else {
    sentence_start = sentence.substr(0, sentence.length());
  }
  std::cout << sentence << "\n" << sentence_start << "\n";

  if (sentence.find("hallo") != std::string::npos) {
    std::cout << "sentence inneheld hallo\n";
  } else {
    std::cout << "sentence inneheld ikkje hallo\n";
  }

  int occurences = 0;
  for (size_t i = 0; i + 1 < sentence.length(); ++i) {
    if (sentence[i] == 101 && sentence[i + 1] == 114) {
      occurences++;
    }
  }
  std::cout << "\"er\" oppstod " << occurences << " ganger i setningen "
            << sentence;
}
