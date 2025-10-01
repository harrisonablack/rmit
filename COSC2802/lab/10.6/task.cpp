#include "task.h"

void ExactChange(int userTotal, std::vector<int>& coinVals ) {
	if (userTotal <= 0) { return; }

	coinVals[3] = userTotal / 25;
	userTotal %= 25;
	coinVals[2] = userTotal / 10;
	userTotal %= 10;
	coinVals[1] = userTotal / 5;
	userTotal %= 5;
	coinVals[0] = userTotal;
}
