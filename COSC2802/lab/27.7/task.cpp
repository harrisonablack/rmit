#include "task.h"

LibraryItem::LibraryItem(const std::string& title, const std::string& author, int publicationYear) {
	this->title = title;
	this->author = author;
	this->publicationYear = publicationYear;
}

std::string LibraryItem::getTitle() const {
	return this->title; 
}

void LibraryItem::setTitle(const std::string& title) {
	this->title = title;
}

std::string LibraryItem::getAuthor() const {
	return this->author;
}

void LibraryItem::setAuthor(const std::string& author) {
	this->author = author;
}

int LibraryItem::getPublicationYear() const {
	return this->publicationYear;	
}

void LibraryItem::setPublicationYear(int publicationYear) {
	this->publicationYear = publicationYear;
}



Book::Book(const std::string& title, const std::string& author, int publicationYear, const std::string& publisher, const std::string& isbn) : LibraryItem(title, author, publicationYear), publisher(publisher), isbn(isbn){}

std::string Book::getPublisher() const {
	return this->publisher;
}

void Book::setPublisher(const std::string& publisher) {
	this->publisher = publisher;
}

std::string Book::getISBN() const {
	return this->isbn;
}

void Book::setISBN(const std::string& isbn) {
	this->isbn = isbn;
}

std::string Book::formatDetails() const {
	std::ostringstream oss;

	oss << "Title: " << this->title << ", ";
	oss << "Author: " << this->author << ", ";
	oss << "Publication Year: " << this->publicationYear << ", ";
	oss << "Publisher: " << this->publisher << ", ";
	oss << "ISBN: " << this->isbn << std::endl;

	return oss.str();
}

std::string LibraryItem::formatDetails() const {
	std::ostringstream oss;

	oss << "Title: " << this->title << ", ";
	oss << "Author: " << this->author << ", ";
	oss << "Publication Year: " << this->publicationYear << ", ";

	return oss.str();
}


Magazine::Magazine(const std::string& title, const std::string& author, int publicationYear, int issueNumber) : LibraryItem(title, author, publicationYear), issueNumber(issueNumber){}

int Magazine::getIssueNumber() const {
	return this->issueNumber;
}

void Magazine::setIssueNumber(int issueNumber) {
	this->issueNumber = issueNumber;
}

std::string Magazine::formatDetails() const {
	std::ostringstream oss;

	oss << "Title: " << this->title << ", ";
	oss << "Author: " << this->author << ", ";
	oss << "Publication Year: " << this->publicationYear << ", ";
	oss << "Issue Number: " << this->issueNumber << ", ";

	return oss.str();
}





