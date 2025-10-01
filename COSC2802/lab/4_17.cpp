#include <iostream>
#include <string>
using namespace std;

int main() {
	char c;
	string in;
	int count = 0;
	
	cin >> c;
	getline(cin, in);

	for (int i = 0; i < in.length(); i ++) {
		count = (in.at(i)==c) ? count = count + 1 : count = count;
	}

	cout << count << " " << c;
	if (count != 1) {cout << "'s";}
	cout << endl;

	return 0;
}
