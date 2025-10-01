#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int index(int r, int c, int n_c) {
	return (r * n_c) + c; 
}

int main() {
	std::srand(0);
	int w,h,k,t,i;
	cin >> h >> w >> k >> t;
	// cin >> h;
	// cin >> w;
	// cin >> k;
	// cin >> t;
	vector<char> gr((w*h), '-');

	if ((w*h) < (k+t)) {
		cout << "Not enough room!";
		return 0;
	}


	// Place k
	i = 0;
	while (i < k) {
		int idx = rand() % (h*w);
		if (gr[idx] == '-') {
			gr[idx] = 'K';
			++i;
		}
	}	

	i = 0;
	while (i < t) {
		int idx = rand() % (h*w);
		if (gr[idx] == '-') {
			gr[idx] = 'T';
			++i;
		}
	}	


	for (int y = 0; y < h; ++y) {
		for (int x = 0; x < w; ++x) {
			cout << "+---";
		}
		cout << "+" << endl;

		for (int x = 0; x < w; ++x) {
			char ce = gr[index(y, x, w)];
			string co = "   ";
			if (ce == 'K') co = "🐨 ";
			else if (ce == 'T') co = "🐅 ";
			cout << "| " << co << " ";
		}
		cout << "|" << endl;
	}

	for (int x = 0; x < w; ++x) {
		cout << "+---";
	}
	cout << "+" << endl;
	


	return 0;
}
