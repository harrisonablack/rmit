#include <iostream>
#include <string>
using namespace std;

int main() {
	string login;
	string first;
	string last;
	int number;

	cin >> first;
	cin >> last;
	cin >> number;

	if (first.length() <= 6) {
		login += first;
	} else {
		login += first.substr(0,6);
	}

	login += last.at(0);
	login += "_";
	login += to_string(number%10);

	cout << "Your login name: " << login << endl;

	return 0;
}
