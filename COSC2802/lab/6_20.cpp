#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<string> words;
	vector<int> freq;
	string in;
	int len;
	int c;

	cin >> len;

	for (int i = 0; i < len; i ++){
		cin >> in;
		c = 1;
		for (int j = 0; j < words.size(); j ++){
			if (words.at(j) == in) {
				freq.at(j) ++;
				c = freq.at(j);
			}
		}

		words.push_back(in);
		freq.push_back(c);
	}
		
	for (int i = 0; i < words.size(); i ++){
		cout << words.at(i) << " - " << freq.at(i) << endl;
	}

	return 0;
}
