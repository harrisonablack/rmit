#include "task.h"

int maxInVector(std::vector<int*>& int_vec) {
	int big = -1;
	for (int* v : int_vec) {
		if (*v > big) {
			big = *v;
		}	
	}

	return big;
}
