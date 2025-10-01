// Write a program that reads a string (single word) from the user and stores the word in a char array. Your program should determine the number of characters in the string and output the Length of the string

#include <iostream>
using namespace std;

int main() {
	const int max_len = 100;
	char w[max_len];
	int s = 0;
	cin >> w;

	for (char c : w) {
		if (c=='\0') {
			cout << s << endl;
			return 0;
		}
		else {
			++s;
		}
	}

	return 0;
}
