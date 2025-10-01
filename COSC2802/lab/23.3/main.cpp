#include <iostream>
#include "Book.h"

int main() {
	Book b;
	std::cout << b ;
	std::string p = "Potato" ;
	b << p ;
	std::cout << b ;

	return 0;
}


