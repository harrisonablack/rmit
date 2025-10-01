#include <iostream>
using namespace std;

int main() {
	int a;
	int b;

	cin >> a;
	cin >> b;

	if (a > b) {
		cout << "Second integer can't be less than the first.";
		return 0;
	}

	while (a < b && (a+5)<= b) {
		cout << a << " ";
		a+=5;
	}

	cout << a << " " << endl;

	return 0;
}
