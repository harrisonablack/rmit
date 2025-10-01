#include <iostream>
#include "task.h"

int main() {
    int arr[] = {5, 8, 2, 11, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::string reversedString = reversePrint(arr, size);
    std::cout << "Reversed array: " << reversedString << std::endl;

    return EXIT_SUCCESS;
}
