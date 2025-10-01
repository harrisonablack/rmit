#include <cstddef>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> nums;
	int l;
	int t = 0;
	int m;

	string in;
	getline(cin, in);

	while(in != "") {
		l = in.find(" ");
		
		if (l==-1){
			if (stoi(in)>=0){
			nums.push_back(stoi(in));
			} else {in="";}
		} else {
			if (stoi(in.substr(0,l)) >= 0) {
			nums.push_back(stoi(in.substr(0,l)));
			}
			in = in.substr(l+1,in.length());
		}
	}

	m = nums.at(0);

	for (int i = 0; i < nums.size(); i ++){

		if(nums.at(i)>=m){
			m = nums.at(i);
		}
		t = t + nums.at(i);
	}
	cout << fixed << setprecision(2) << m << " " <<  static_cast<double>(t)/nums.size() << endl;

	return 0;
}
