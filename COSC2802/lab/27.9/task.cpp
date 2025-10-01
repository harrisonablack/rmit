#include "task.h"
#include <sstream>


void readBooks(const std::string& filename, std::vector<std::string>& books, std::vector<std::string>& authors) {
	std::ifstream ifs;	
	std::string in, author, book;
	char delim = ',';


	ifs.open(filename);

	while (std::getline(ifs, in)) {
		std::stringstream ss(in);
		
		std::getline(ss,book,delim);
		std::getline(ss,author,delim);

		books.push_back(book);
		authors.push_back(author);
	}
}

bool isBookInLibrary(const std::vector<std::string>& books, const std::vector<std::string>& authors, const std::string& book, const std::string& author) {
	for (int i = 0; i < static_cast<int>(books.size()); ++i) {
		if (books[i] == book && authors[i] == author) {
			return true;
		}
	}
	return false;
}

