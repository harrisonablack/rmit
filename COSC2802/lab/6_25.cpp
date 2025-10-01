#include <iostream>
using namespace std;

int main(){
	int s, x, y;
	cin >> s;
	cin >> x;
	cin >> y;

	char board[s][s];

	for (int i = 0; i < s; i++){
		for (int j = 0; j < s; j ++){
			board[i][j] = '_';
		}
	}

	if (x >= s || y >= s) {
		cout << "Invalid position." << endl;
		return 0;
	}

	board[x][y] = 'S';



	cout << "2D Vector:" << endl;
	cout << "{" << endl;

	for (int i = 0; i < s; i ++){
		cout << "{";
		for (int j = 0; j < s; j++) {
			if (j == (s-1)) {
				cout << board[i][j];
			} else {
				cout << board[i][j] << ", ";
			}
		}

		if (i==(s-1)) {
			cout << "}" << endl;
		} else {
			cout << "}," << endl;
		}
	}

	cout << "}" << endl;


	cout << "Game Board:" << endl;
	for (int i = 0; i < s; i ++){
		for (auto c : board[i]){
			cout << c << " ";
		}
		cout << endl;
	}

	return 0;
}
