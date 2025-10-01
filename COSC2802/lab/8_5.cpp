#include <iostream>
using namespace std;

int main(){
	string str;
	char cha;
	char rep;

	cin >> str >> cha >> rep;

	cout << "Original string: " << str << endl; 

	for (int i = 0; i < str.length(); i++){
		if (str[i]==cha) {
			str[i]=rep;
		}
	}

	cout << "Modified string: " << str << endl; 

	return 0;
}
