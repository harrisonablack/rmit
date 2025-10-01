#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int max_len = 100;
	char a[max_len];
	char b[max_len];
	int diff;

	cin >> a;
	cin >> b;

	int res = strcmp(a,b);

	if (res==0) {
		cout << "Strings are equal" << endl;
	} else if (res < 0) {
		cout << "First string comes before second string lexicographically" << endl;
	} else {
		cout << "Second string comes before first string lexicographically" << endl;
	}
	return 0;
}
