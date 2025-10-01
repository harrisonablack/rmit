#include "task2.h"

void IntsLessThanOrEqualToThreshold(std::vector<int> uservalues, int upperthreshold,std::vector<int>& resvalues) {
	for (unsigned int i = 0; i < uservalues.size(); ++i) {
		if (uservalues[i] <= upperthreshold) {
			resvalues.push_back(uservalues[i]);
		}
	}
}
