#include <iostream>
#include <string>
using namespace std;

int main() {
	string full;
	string names[3];
	int count = 0;
	getline(cin, full);

	for (int i = 0; i < full.length(); i ++){
		if (full.at(i) == ' '){
			count += 1;
		} else {
			names[count] += full.at(i);
		}
	}

	if (names[2] == "") {
		cout << names[1] << ", " << names[0].at(0) << "." << endl;
	} else {
		cout << names[2] << ", " << names[0].at(0) << "." << names[1].at(0) << "." << endl;
	}

	// for (int i = 0; i < 3; i ++){
	// 	cout << i << " " << names[i] << endl;
	// }

	return 0;
}
