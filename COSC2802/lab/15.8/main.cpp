#include <iostream>
#include "task.h"

// Example showing:
// (1) Passing built-in array to function
// (2) use of sizeof and why need to pass size of the built-in array to the function

int main() {
 
    int nums[] = {1, 2, 3, 4, 5};
    
    // get size of array to pass to function: 
    //   sizeof(nums) = 5 (elements) * 4 (bytes per int) = 20 bytes
    //   sizeof(nums[0]) = 4 (bytes per int)
    int size = sizeof(nums) / sizeof(nums[0]);  

    std::cout << "In main:" << std::endl;
    std::cout << "sizeof(nums): " << sizeof(nums) << " bytes" << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Number of elements: " << size << std::endl;

    std::cout << "Before modifyArray: ";
    for (int i = 0; i < size; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    // call function: 
    // the array nums decays (converted) to &nums[0] i.e. passes pointer to first element 
    // No need to use address-of (&) with built-in array – just array name
    modifyArray(nums, size);

    std::cout << "After modifyArray: ";
    for (int i = 0; i < size; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
