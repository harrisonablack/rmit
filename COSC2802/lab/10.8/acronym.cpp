#include "acronym.h"
#include <cctype>
#include <sstream>

std::string CreateAcronym(std::string userPhrase) {
  std::istringstream iss(userPhrase);
  std::string word;
  std::string acronym = "";

  while (iss >> word) {
    if (!word.empty() && std::isupper(word[0])) {
      acronym += word[0];
      acronym += '.';
    }
  }

  return acronym;
}
