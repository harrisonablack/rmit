// Write a C++ program that will find the Nth token from a given C-style string based on a specified delimiter character. Details are: a C-style string is provided in main.cpp the following values are read from the input a delimiter character an integer N representing the position of the token to extract. Your program should extract and output to the terminal, the Nth token, using the format shown below:

#include <cctype>
#include <iostream>
using namespace std;

int main(){
	char str[100] = "This,is,a,test,string";
	char delim;
	int nth;
	int ite = 1;

	cin >> delim;
	cin >> nth;

	int left = 0;
	int right = 0;

	do {
		// cout << "Left " << left << " right " << right << endl;
		if (str[right]==delim || str[right]=='\0') {
			// Output nth string
			// cout << "ite: " << ite << endl;
			if ((ite) == (nth)) {
				cout << "Token: ";
	
				if (str[left]=='\0') {
					cout << endl;
					return 0;
				}

				for (int j = left; j < (right); j++){
					if (str[j]=='\0'){ cout << "Null character"; }
					cout << str[j];
				}
				cout << endl;
				return 0;
			}
		++ite;
		left = right + 1;
		right = left;
		}
		++right;
	}while (ite <=nth);

	cout << "Token: ";
	return 0;
}
