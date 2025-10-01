#include <iostream>
#include <vector>
using namespace std;

int main(){
	int in;
	int s;
	cin >> in;
	int t = 0;
	vector<vector<int>> vec(in);

	for (int i = 0; i < in; i ++){
		int c, b;
		cin >> c;

		for (int j = 0; j < c; j ++) {
			cin >> b;
			vec.at(i).push_back(b);
		}
	}

	cin >> s;
	cout << endl << "Input vector: " << endl;;

	for (auto r : vec) {
		for (auto c : r) {
			cout << c << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Remove all inner vectors containing : " << s << endl;


	int i = 0;
	int j = 0;

	while (i < vec.size()){
		while (j < vec[i].size()) {
			if (vec[i][j] == s) {
				t++;
				vec.erase(vec.begin() + i);
			} else {
				j++;
			}
		}
		j=0;
		i++;
	}

	cout << "Value " << s << " removed: " << t << " inner vectors" << endl;
	cout << "Updated vector: " << endl;
	for (auto r : vec) {
		for (auto c : r) {
			cout << c << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
