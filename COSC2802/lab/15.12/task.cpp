#include "task.h"

std::string reversePrint(int* intArr, int size) {
	std::string ret = "";

	for (int i = size-1; i >= 0; --i) {
		ret = ret + std::to_string(intArr[i]) + " ";
	}

	return ret;
}
