#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Enter your name:" << endl;
	string name;
	string first;
	cin >> name;

	first = name.substr(0,name.find_first_of(' '));

	cout << "Hello " << first << endl;

	for (int i = 0; i < 10; i++){
		cout << first << endl;
	}



	return 0;
}
