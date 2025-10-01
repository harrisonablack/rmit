#include "task.h"

int* find_array_value(int *int_arr, int logical_length, const std::string& option) {

	int lower = 0;
	int high = 0;

	for (int i = 0; i < logical_length; ++i) {
		if (int_arr[i] <= int_arr[lower]) {
			lower = i;
		}

		if (int_arr[i] >= int_arr[high]) {
			high = i;
		}
	}

	if (std::tolower(option[1]) == 'i') {
		return &int_arr[lower];
	} else {
		return &int_arr[high];
	}


	return 0;
}
