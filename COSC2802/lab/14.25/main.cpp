#include "SimpleCar.h"
#include <iostream>
using namespace std;

int main() {

	int miles;
	int rev;

	cin >> miles >> rev;

	SimpleCar car = SimpleCar();

	car.HonkHorn();
	car.Drive(miles);
	car.Report();
	car.HonkHorn();
	car.Reverse(rev);
	car.Report();

	return 0;
}
