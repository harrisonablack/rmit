#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string in;

	getline(cin, in);


	while (in!= "Done" && in!= "done" && in!= "d") {
		for (int i = in.size()-1; i >= 0; i --) {
			// cout << i;
			cout << in.at(i);
		}
		cout << endl;
		getline(cin, in);
	}

	return 0;
}
