#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;

int GetWordFrequency(vector<string> wordsList, string currWord) {
	int c = 0;
	string comp, curr;

	for (unsigned int i = 0; i < wordsList.size(); i++) {
		comp = wordsList[i];
		comp[0]=tolower(comp[0]);
		curr = currWord;
		curr[0]=tolower(comp[0]);
		if (comp==curr){ ++c;}
	}

	return c;
}

int main() {
	int len;
	string in;
	cin >> len;

	vector<string> wordsList(len);

	for (int i = 0; i < len; ++i){
		cin >> in;
		wordsList[i] = in; 
	}

	for (string s : wordsList) {
		cout << s << " " << GetWordFrequency(wordsList, s) << endl;
	}

	return 0;
}
