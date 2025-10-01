#include <iostream>
#include "task.h"

int main(){
	int arr[ALLOCATED_LENGTH];
	int num;
	int in;
	std::string opt;

	std::cin >> num;

	if (ALLOCATED_LENGTH < num) {
		return 0;
	}

	if (num <= 0) {
		std::cout << "0" << std::endl;
		return 0;
	}

	for (int i = 0; i < num; ++i) {
		std::cin >> in;
		arr[i] = in;
	}

	std::cin >> opt;

	int out = *find_array_value(arr, num, opt);
	std::cout << out << std::endl;

	return 0;
}
