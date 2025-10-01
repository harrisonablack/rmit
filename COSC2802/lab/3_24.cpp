#include <iostream>
using namespace std;

string highWay(int num) {
	string r;

	if (num <= 99 && num > 0 ) {
		if ((num%2)==1) {
			r = "I-" + to_string(num) + " is primary, going north/south.";
		} else {
			r = "I-" + to_string(num) + " is primary, going east/west.";
		}
	}

	return r;
}

int main() {
	int highwayNumber;

	cin >> highwayNumber;

	if (highwayNumber <= 0 || (highwayNumber % 100)==0 || highwayNumber >= 1000) {
		cout << highwayNumber << " is not a valid interstate highway number." << endl;
	} else if (highwayNumber <= 99) {
		cout << highWay(highwayNumber) << endl;
	} else if (highwayNumber >= 100) {
		cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ", going ";

		if (((highwayNumber%100)%2)==1) {
			cout << "north/south." << endl;
		} else {
			cout << "east/west." << endl;
		}
	}

	return 0;
}


