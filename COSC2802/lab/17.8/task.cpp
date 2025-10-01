#include "task.h"
#include <iostream>
// Your code goes here

// (1) TRY: Implementation using array subscript operator []

// std::string format_cstyle_string(char *str) {
//
// 	if (str[0] == '\0') {
// 		return "";
// 	}
//
// 	std::string ret = "";
// 	int i = 0;
// 	do {
// 		ret += str[i];
// 		ret += " ";
// 		++i;
// 	}while (str[i]!='\0');
//
// 	std::cout << ret << std::endl;
//
// 	return ret;
// }

// (2) TRY: Implementation using pointer arithmetic

std::string format_cstyle_string(char *str) {
	std::string ret = "";

	if (*str == '\0') {
		return "";
	}

	do {
		ret += *str;
		ret += " ";
		++str;
	}while (*str != '\0');

	return ret;
}
