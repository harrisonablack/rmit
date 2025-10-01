#include <cctype>
#include <iomanip>
#include <iostream>
#include <ostream>
// #include <sstream>
#include <string>

class Book {
private:
  int year;
  int numCopies;
  float rating;
  std::string title;
  std::string author;

public:
  Book(int, int, float, std::string, std::string);
  friend std::ostream &operator<<(std::ostream &os, const Book &b);
};

Book::Book(int year, int numCopies, float rating, std::string title,
           std::string author) {
  this->year = year;
  this->numCopies = numCopies;
  this->rating = rating;
  this->title = title;
  this->author = author;
}

std::ostream &operator<<(std::ostream &os, const Book &b) {
  os << std::fixed << std::setprecision(3);

	for (char c : b.title) {
		os << static_cast<char>(std::toupper(c));
	}

  os << " by " << b.author << " was published in ";
	os << std::setw(4) << std::setfill('0') << b.year;

  os << " and received a rating of " << b.rating << "/5. ";
  os << "We currently have " << b.numCopies;

  if (b.numCopies == 1) {
    os << " copy ";
  } else {
    os << " copies ";
  }

  os << "left in stock.";

  return os;
}

int main() {
  // Write your testing code here
  return 0;
}
