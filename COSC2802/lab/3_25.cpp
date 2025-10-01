#include <iostream>
using namespace std;

int outCoinVal(string singularName, string multName, int coinVal, int totalVal) {
	int m = totalVal / coinVal;

	if (m!=0) {
		if (m==1) {
			cout << "1 " << singularName << endl;
		} else if (m >1) {
			cout << m << " " << multName << endl;
		}
	}

	return totalVal % coinVal;
}

int main() {
	int change;
	int rem;

	cin >> change;

	if (change <= 0) {
		cout << "No change" << endl;
		return 0;
	}

	rem = outCoinVal("Dollar", "Dollars", 100, change);
	rem = outCoinVal("Quarter", "Quarters", 25, rem);
	rem = outCoinVal("Dime", "Dimes", 10, rem);
	rem = outCoinVal("Nickel", "Nickels", 5, rem);
	rem = outCoinVal("Penny", "Pennies", 1, rem);

	return 0;
}

// Dollar 100 cent
// Quater 25 cent
// Dimes 10 cent
// Nickles 5 cent
// Pennies 1 cent
