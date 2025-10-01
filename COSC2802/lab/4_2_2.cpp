#include <iostream>
using namespace std;

int main() {
	int valueIn;

	cin >> valueIn;
	while (valueIn != 1){
	cout << "User entered " << valueIn << endl;
	cin >> valueIn;
	}

	cout << "Done" << endl;

	return 0;
}
