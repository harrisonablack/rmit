#include <iostream>

void removeElement(int arr[], int& logicalLength, int indexToRemove, int allocatedLength) {
    if (indexToRemove < 0 || indexToRemove >= logicalLength) {
        std::cout << "Index out of bounds!" << std::endl;
        return;
    }

    for (int i = indexToRemove; i < logicalLength - 1; ++i) {
        arr[i] = arr[i + 1];
    }
 
    --logicalLength;
}

