// Write a program that reads an integer, a list of words, and a character. The integer signifies how many words are in the list. The output of the program is every word in the list that contains the character at least once. For coding simplicity, follow each output word by a comma, even the last one. Add a newline to the end of the last output. Assume at least one word in the list will contain the given character.

#include <iostream>
#include <vector>
using namespace std;

int main(){
	string str;
	char find;

	int count;
	cin >> count;

	vector<string> word(count);

	for (int i = 0; i < count; i ++){
		cin >> str;
		word[i]=str;
	}
	 
	cin >> find;

	for (string s : word) {
		if (!(s.find(find) == string::npos)) {
			cout << s << ",";
		}
	}
	cout << endl;


	return 0;
}
