#include "Book.h"
#include <ostream>

Book::Book(){
	this->title = "-1";
	this->year = -1;
	this->rating = -1.0;
}

Book& operator<<(Book& b, int y) {
	b.year = y;
	b.yearSet = true;
	return b;
}

Book& operator<<(Book& b, std::string t) {
	b.title = t;
	b.titleSet = true;
	return b;
}

Book& operator<<(Book& b, double r){
	b.rating = r;
	b.ratingSet = true;
	return b;
}

std::ostream& operator<<(std::ostream& os, const Book& b) {
	if (b.titleSet) {
		os << "title: " << b.title << "," << std::endl;
	} else {
		os << "Book: <missing title> - ";
	}

	if (b.yearSet) {
		os << "year: " << b.year << "," << std::endl; 
	} else {
		os << "<missing year> - ";
	}

	if (b.ratingSet) {
		os << "rating: " << b.rating << "," << std::endl;
	} else {
		os << "<missing rating>." << std::endl; 
	}


	return os;
}

// friend Book& operator<< (Book& b, int y);
		// friend Book& operator<< (Book& b, std::string t);
		// friend Book& operator<< (Book& b, double r);
		//
		// friend std::ostream& operator<<(std::ostream& os, const Book& b);
		//
		// // Testing function to allow us to see your private variables, do not edit.
		// friend bool testPassed(std::ofstream& testFeedback) ;
		//

