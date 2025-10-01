#include <iostream>
#include <string>
#include <cctype>


int countVowels(const std::string& str);
void convertToUpperCase(std::string& str);

int main() {
	std::string str;
	std::getline(std::cin, str);

	int vowelCount = countVowels(str);
	std::cout << "Number of vowels: " << vowelCount << std::endl;

	convertToUpperCase(str);
	std::cout << "Uppercase string: " << str << std::endl;

	return 0;
}

int countVowels(const std::string& str) {
	int tot = 0;
	for (int i = 0; i < str.size(); i++){
		char c = std::tolower(str[i]);

		if (c == 'a'){ tot += 1; }
		if (c == 'e'){ tot += 1; }
		if (c == 'i'){ tot += 1; }
		if (c == 'o'){ tot += 1; }
		if (c == 'u'){ tot += 1; }
		// if (c == 'y'){ tot += 1; }
	}

	return tot;
}


void convertToUpperCase(std::string& str) {
	std::string temp = str;
	for (int i = 0; i < str.size(); i++){
		str[i] = toupper(temp[i]);
	} 

}


