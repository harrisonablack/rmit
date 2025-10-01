#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> inVec;
	int in;


	cin >> in;
	while (in >= 0) {
		inVec.push_back(in);
		cin >> in;

		if (inVec.size() > 9) {
			cout << "Too many numbers" << endl;
			return 0;
		}
	}

	cout << "Middle item: " << inVec.at((inVec.size() /2)) << endl;

	return 0;
}
