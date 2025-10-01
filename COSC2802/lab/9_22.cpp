#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec){
	sort(myVec.begin(), myVec.end());
	reverse(myVec.begin(), myVec.end());
}

int main() {
	int len, in;
	cin >> len;

	vector<int> myVec(len);

	for (int i = 0; i < len; i++){
		cin >> in;
		myVec[i] = in;
	}

	SortVector(myVec);

	for (int i = 0; i < myVec.size(); ++i){
		cout << myVec[i] << ",";
	}
	cout << endl;

	return 0;
}
