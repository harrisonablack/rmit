#include <iostream>
#include <string>
#include <vector> 
#include "task.h"

int main() {
	int val;
	std::cin >> val;
	std::vector<int> coinVals(4);
	std::vector<std::string> singular = { "penny", "nickel", "dime", "quarter"};
	std::vector<std::string> multiple = { "pennies", "nickels", "dimes", "quarters"};

	if (val <= 0) {
		std::cout << "no change" << std::endl;
	}

	ExactChange(val, coinVals);

	for (int i = 0; i < 4; i++) {
		if (coinVals[i]!=0){
			if (coinVals[i] == 1) {
				std::cout << coinVals[i] << " " << singular[i] << std::endl;
			} else if (coinVals[i] > 1) {
				std::cout << coinVals[i] << " " << multiple[i] << std::endl;
			}
		}
	}

	return 0;
}
