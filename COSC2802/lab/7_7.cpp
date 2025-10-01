// Write a program that reads a list of chars from input and stores them in a char array. Assume there will always be fewer than 20 chars. Your program should determine if the list is a palindrome (values are identical from first to last and last to first). The input begins with an integer indicating the number of chars in the word that follows.
// Output "yes" if the chars in the array is a palindrome
// Output "no" otherwise
// The output ends with a newline.

#include <iostream>
using namespace std;

int main(){
	int size;
	char in;
	cin >> size;

	char c[size];

	for (int i = 0; i < size; ++i){
		cin >> in;
		c[i] = in;
	}

	for (int i = 0; i < (size/2); ++i) {
		if (c[i]!=c[(size-1)-i]) {
			cout << "no" << endl;
			return 0;
		}
	}

	cout << "yes" << endl;
	return 0;
}
