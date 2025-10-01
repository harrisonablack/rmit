#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip(){
	int res = rand() % 2;

	if (res == 0) {
		return "Tails";
	} else if (res == 1) {
		return "Heads";
	}
	return "";
}

int main(){
	int c;
	cin >> c;
	srand(2);

	for (int i = 0; i < c; i++){
		cout << CoinFlip() << endl;
	}

	return 0;
}
