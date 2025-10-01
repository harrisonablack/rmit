#include <iostream>
using namespace std;

int main() {
	double inputNumber;
	int numCounts;

	numCounts = 0;
	cin >> inputNumber;  // The first floating-point number is read

	while (inputNumber > -25.0 && inputNumber < 25.0) {
		numCounts ++;
		cin >> inputNumber;
	}

	numCounts++;
	cout << "Number of floating-point numbers read: " << numCounts << endl;

	return 0;
}
