#include <iostream>
#include "task.h"

int main() {
    int intArray[]{0, 1, 2, 3, 4, 5};
    int size = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original Array: ";
    std::cout << formatArray(intArray, size);

    // Reverse the array in-place
    reverseArray(intArray, size);

    std::cout << "Reversed Array: ";
    std::cout << formatArray(intArray, size);

    return EXIT_SUCCESS;
}
