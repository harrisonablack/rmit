#include "task1.h"

void GetUserValues(std::vector<int>& userValues, int numValues) {
	int in;
	for (int i = 0; i < numValues; i++) {
		std::cin >> in;
		userValues.push_back(in);
	}
}

