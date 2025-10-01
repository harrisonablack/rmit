#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<double> nums;
	int s;
	double l = 0.0;
	double in;

	cin >> s;

	while (nums.size() < s){
		cin >> in;
		nums.push_back(in);
		if (in > l) {
			l=in;
		}
	}

	for (int i = 0; i < nums.size(); i ++){
		cout << fixed << setprecision(2) << (nums.at(i)/l) << " ";
	}

	cout << endl;

	return 0;
}
