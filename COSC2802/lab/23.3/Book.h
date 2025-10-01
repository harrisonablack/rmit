#ifndef BOOK
#define BOOK

#include <iostream>
#include <ostream>
#include <istream>


class Book {
	private:
		int year ;
		std::string title ;
		double rating ;

		bool yearSet = false;
		bool titleSet = false;
		bool ratingSet = false;

	public:
		Book() ;

		// friend Book& operator<< (Book& b, datatype) ;
		friend Book& operator<< (Book& b, int y);
		friend Book& operator<< (Book& b, std::string t);
		friend Book& operator<< (Book& b, double r);

		friend std::ostream& operator<<(std::ostream& os, const Book& b);

		// Testing function to allow us to see your private variables, do not edit.
		friend bool testPassed(std::ofstream& testFeedback) ;
};

#endif
