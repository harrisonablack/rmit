#include <iostream>
#include <vector>

void calculateMeanVariance(std::vector<double>& data, double& mean, double& variance);

int main() {
	int n;
	std::cout << "Enter the number of values: ";
	std::cin >> n;
	std::cout << "\n";
	std::vector<double> data(n);
	std::cout << "Enter " << n << " values: ";
	for (int i = 0; i < n; i++) {
		std::cin >> data[i];
	}
	std::cout << "\n";

	double mean, variance;
	mean = variance = 0;

	if (data.size() > 0) {
		calculateMeanVariance(data, mean, variance);
	}


	std::cout << "Mean: " << mean << std::endl;
	std::cout << "Variance: " << variance << std::endl;

	return 0;
}


void calculateMeanVariance(std::vector<double>& data, double& mean, double& variance) {
	double tot = 0;

	for (double d : data) {
		tot += d;
	}
	mean = tot / data.size();

	tot = 0;
	for (double d : data) {
		tot += (d - mean) * (d - mean);
	}

	variance = tot / data.size();
	
}
