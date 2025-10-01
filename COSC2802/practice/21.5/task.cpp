#include "task.h"
#include <cstring>
#include <cctype>

bool hasConsecutiveDuplicates(const char* str) {
	if (sizeof(str) <= 1) {
		return false;
	}

	for (int i = 0; i < static_cast<int>(sizeof(str)) -1; ++i) {
		if (str[i] == str[i+1]) {
			return true;
		}
	}

	return false;
}


std::string cumulativeConcatenation(const char* str) {
	std::string ret = "";
	for (int i = 1; i < static_cast<int>(sizeof(str)) -2; ++i) {
		for (int j = 0; j < i; ++j) {
			ret += str[j];
		}
		ret += '_';
	}

	return ret;
}
