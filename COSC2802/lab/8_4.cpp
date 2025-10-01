#include <iostream>
using namespace std;

int main(){
	int n;
	char c;
	cin >> n >> c;

	for (int i = 0; i < n; i++){
		int count = (i*2) +1;

		for (int j = 0; j < ((n*2)-count)/2; j++){
			cout << " ";
		}

		for (int j = 0; j < count; j++) {
			cout << c;
		}
		cout << endl;
	}

	return 0;
}
