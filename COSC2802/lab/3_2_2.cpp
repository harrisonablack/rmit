#include <iostream>
using namespace std;

int main() {
	int awardPoints;
	int userTickets;

	cin >> userTickets; // Program will be tested with values: 5, 6, 7, 8.

	if (userTickets == 6) {
		awardPoints = 1;
	} else {
		awardPoints = userTickets;
	}

	cout << awardPoints << endl;

	return 0;
}
