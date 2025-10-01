#include <iostream>

int main(){
	int c, in, sum, min, max;
	sum = 0;
	std::cin >> c;

	int* arr = new int[c];

	for (int i = 0; i < c; ++i){
		std::cin >> in;
		sum += in;

		arr[i] = in;
	}

	min = arr[0];
	max = arr[0];

	for (int i = 0; i < c; ++i){
		if (arr[i] < min) {
			min = arr[i];
			// std::cout << arr[i] << "<" << min << std::endl; 
		}

		if (arr[i] > max) {
			max = arr[i];
			// std::cout << arr[i] << ">" << max << std::endl; 
		}
	}
	std::cout << std::endl;
	std::cout << "Sum of the elements: " << sum << std::endl;
	std::cout << "Maximum value: " << max << std::endl;
	std::cout << "Minimum value: " << min << std::endl;

	delete [] arr;

	return 0;
}
