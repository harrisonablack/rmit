#include "task.h"

void swapValues(int *a, int *b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}
