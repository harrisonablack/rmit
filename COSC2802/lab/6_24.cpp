#include <iostream>
#include <vector>
using namespace std;

int main(){
	int count, in, low, high;
	int t = 0;
	int w = 0;
	vector<int> nums;

	cin >> count;

	if (count <= 0) {
		cout << "Inventory vector: {}" << endl;
		cout << "Total inventory value: 0" << endl;
		cout << "Most valuable item: N/A" << endl;
		cout << "Least valuable item: N/A" << endl;
		cout << "Number of items worth more than 100: 0" << endl;

		return 0;
	}

	for (int i = 0; i < count; i ++){
		cin >> in;
		t += in;
		if (in >= 100) {w ++;}
		nums.push_back(in);
	}


	low = nums.at(0);
	high = nums.at(0);
	for (int i = 0; i < nums.size(); i ++){
		if (nums.at(i)<= low) {
			low = nums.at(i);
		}
		if (nums.at(i)>= high) {
			high = nums.at(i);
		}
	}

	cout << "Inventory vector: {";
	for (int i = 0; i < nums.size(); i ++){
		if (i == (nums.size()-1)) {
			cout << nums.at(i);
		} else {
			cout << nums.at(i) << ", ";
		}
	}
	cout << "}" << endl;
	cout << "Total inventory value: " << t << endl;
	cout << "Most valuable item: " << high << endl;
	cout << "Least valuable item: " << low << endl;
	cout << "Number of items worth more than 100: " << w << endl;
	return 0;
}
