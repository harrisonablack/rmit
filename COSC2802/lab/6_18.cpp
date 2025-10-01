#include <iostream>
#include <vector>
using namespace std;

int main(){
	int c;
	int in;
	int t;
	vector<int> nums;	

	cin >> c;

	while (nums.size()<c){
		cin >> in;
		nums.push_back(in);
	}

	cin >> t;

	for (int i = 0; i < nums.size(); i ++){
		if (nums.at(i)<=t){
			cout << nums.at(i) << ",";
		}
	}

	cout << endl;

	return 0;
}
