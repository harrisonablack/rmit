#include "task.h"
#include <sstream>

void reverseArray(int* intArray, const int size) {
	for (int i = 0; i < size / 2; ++i) {
		int temp = intArray[i];
		intArray[i] = intArray[size - 1 - i];
		intArray[size - 1 - i] = temp;
	}
}

std::string formatArray(int* intArray, const int size) {
	std::ostringstream oss;
	oss << "{";
		for (int i = 0; i < size; ++i) {
			oss << intArray[i];
			if (i < size - 1) {
				oss << ", ";
			}
	}
	oss << "}";
	return oss.str();
}


