#include <iostream>
#include "file_reader.h"

int main() {
    std::cout << "WORDS:\n";
    readWordsFromFile("testfile.txt");

    std::cout << "LINES:\n";
    readLinesFromFile("testfile.txt");

    return EXIT_SUCCESS;
}
