#include <iostream>
#include "task.h"

int main() {
    // Declare and initialize an integer variable
    int myInt = 5;
    std::cout << "Initial value of myInt: " << myInt << std::endl;

    // Declare and initialize a pointer to the integer
    int* ptr = &myInt;

    // Directly modify the value of the integer
    myInt = 10;
    std::cout << "Value of myInt after direct modification: " << myInt << std::endl;

    // Use the pointer to modify the value of the integer
    *ptr = 20;
    std::cout << "Value of myInt after modification through pointer: " << myInt << std::endl;

    return 0;
}
