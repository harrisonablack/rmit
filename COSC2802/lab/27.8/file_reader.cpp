#include "file_reader.h"

// void readWordsFromFile(const std::string& filename);
// void readLinesFromFile(const std::string& filename);

void readWordsFromFile(const std::string &filename) {
	std::ifstream inFs;	
	std::string in;

	inFs.open(filename);

	if (!inFs.is_open()) {
		std::cout << "Error: Unable to open file" << std::endl;
		return;
	}

	while (inFs >> in) {
		std::cout << in << std::endl;
	}
}

void readLinesFromFile(const std::string& filename) {
	std::ifstream inFs;
	std::string in;

	inFs.open(filename);

	if (!inFs.is_open()) {
		std::cout << "Error: Unable to open file" << std::endl;
		return;
	}

	while (std::getline(inFs, in)) {
		std::cout << in << std::endl;
	}
}
