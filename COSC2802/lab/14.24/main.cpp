#include <iostream>
#include "GVDie.h"
using namespace std;

int RollSpecificNumber(GVDie die, int goal, int num) {
	int roll = -1;
	int rollCount = 0;
	int goalCount = 0;

	if (num > 6 || num < 1) {
		return -1;
	}

	do {
		die.Roll();
		roll = die.GetValue();
		++ rollCount;

		if (roll == num) {
			++goalCount;
		}

	}while (goalCount < goal);
	
	return rollCount;
}

int main() {
	GVDie die = GVDie();
	die.SetSeed(15); // Create a GVDie object with seed value 15
	int goal;
	int faceNum;
	int rolls;

	cin >> goal;
	cin >> faceNum;
	rolls = RollSpecificNumber(die, goal, faceNum);  // Should return the number of rolls 
	
	if (rolls == -1) {
	   cout << "Invalid die's face number" << endl;
	}
	else {
	   cout << "It took " << rolls << " rolls to get a \"" <<  faceNum << "\" " << goal << " times." << endl;
	}

	return 0;
}
