#include <iostream>
#include "acronym.h"

int main() {
	std::string inputPhrase;
	std::getline(std::cin, inputPhrase);
	std::string userAcronym;

	userAcronym = CreateAcronym(inputPhrase);
	std::cout << userAcronym << std::endl;

	return 0;
}
