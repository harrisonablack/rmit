#include "task.h"
#include <algorithm>
#include <string>

Book::Book(const std::string &title, const std::string &author, int publicationYear) {
	Book::title = title;
	Book::author = author;
	Book::publicationYear = publicationYear;
}

std::string Book::getTitle() const {
	return Book::title;
}

std::string Book::getAuthor() const {
	return Book::author;
}
 
int Book::getPublicationYear() const {
	return Book::publicationYear;
}

bool Book::operator<(const Book &other) const {
	if (publicationYear < other.getPublicationYear()) {
		return true;
	} else {
		return false;
	}
}

void BookList::addBook(const Book &book) {
	BookList::books.push_back(book);
}

void BookList::sortByPublicationYear() {
	std::sort(books.begin(), books.end());
}

std::string BookList::formatBookList() const {
	std::string format = "";
	for (unsigned int i = 0; i < books.size(); ++i) {
		format += std::to_string(i + 1) + ". Title: " + books[i].getTitle() + ", Author: " + books[i].getAuthor() + ", Year: " + std::to_string(books[i].getPublicationYear()) + "\n";
	}

	std::cout << format;

	return format;
}
