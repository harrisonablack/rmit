#include <iostream>
#include <vector> 
#include "task1.h"
#include "task2.h"

int main() {
	std::vector<int> userValues; 
	std::vector<int> resValues; 
	int upperThreshold;
	int numValues;
	unsigned int i;

	std::cin >> numValues;
	GetUserValues(userValues, numValues);

	std::cin >> upperThreshold;

	IntsLessThanOrEqualToThreshold(userValues, upperThreshold, resValues);
	for (i = 0; i < resValues.size(); ++i) {
	std::cout << resValues.at(i) << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
