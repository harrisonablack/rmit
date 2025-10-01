#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> userInts;
	int count;
	int in;

	cin >> count;

	while (userInts.size()<count) {
		cin >> in;
		userInts.push_back(in);
	}

	for (int i = userInts.size()-1; i >= 0; i--) {
		cout << userInts.at(i) << ",";
	}

	cout << endl;

	return 0;
}
