#include <iostream>
using namespace std;

int main(){
	int s;
	int x;
	int y;

	cin >> s;

	for (y = s; y > 0; y --) {
		for (x=1; x <=s; x++) {
			cout << "(" << x << "," << y << ") ";
		}
		cout << endl;
	}

	return 0;
}
