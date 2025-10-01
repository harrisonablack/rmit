#include "task.h"
#include <iostream>

// PointerPair(int& a, int& b);
// void swapValues();
// std::string displayValues() const;

PointerPair::PointerPair(int& a, int& b) {
	ptr1 = &a;
	ptr2 = &b;
}

void PointerPair::swapValues(){
	int tmp = *ptr1;

	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

std::string PointerPair::displayValues() const {
	std::string ret;
	ret += "Value pointed by ptr1: ";
	ret += std::to_string(*ptr1);
	ret += '\n';
	ret += "Value pointed by ptr2: ";
	ret += std::to_string(*ptr2);
	// ret += '\n';

	return ret;
}

