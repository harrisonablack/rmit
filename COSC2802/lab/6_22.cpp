// Write a program that reads a list of integers from input and determines if the list is a palindrome (values are identical from first to last and last to first). The input begins with an integer indicating the length of the list that follows. Assume that the list will always contain fewer than 20 integers. Output "yes" if the list is a palindrome and "no" otherwise. The output ends with a newline.

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int size;
	int in;
	cin >> size;

	vector<int> nums;

	for (int i = 0; i < size; ++i){
		cin >> in;
		nums.push_back(in);
	}
	
	for (int i = 0; i < (size/2); ++i) {
		if (nums.at(i) != nums.at((size-1)-i)) {
			cout << "no" << endl;
			return 0;
		}
	}

	cout << "yes" << endl;
	return 0;
}
