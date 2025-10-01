#include <iostream>
#include <vector>
#include "task.h"

int main() {
	std::vector<int> intVec;
	std::vector<int*> ptrVec;
	int num_inputs;
	int in_int;

	std::cin >> num_inputs;

	for (int i = 0; i < num_inputs; ++i) {
		std::cin >> in_int;
		intVec.push_back(in_int);
		ptrVec.push_back(&intVec[i]);
	}

	std::cout << "Max int: " << maxInVector(ptrVec) << std::endl; 

	return EXIT_SUCCESS;
}
