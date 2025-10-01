// Write a program that reads in 2 strings (single word) from the user and stores them in 2 char array. Your program should then concatenate the 2 strings, to form a new string and output the string to the terminal.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int max_len = 100;
	char a[max_len];
	char b[max_len];
	char c[max_len];

	cin >> a;
	cin >> b;

	cout << "Concatenated String: " << strcat(a,b) << endl;
	return 0;
}
