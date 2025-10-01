#include "task.h"
#include <iostream>
 
void modifyArray(int arr[], int size) { // the built in array has decayed to a pointer to int
   for (int i = 0; i < size; ++i) {
      arr[i] *= 2;   
   }
    
   // Show use of sizeof
   std::cout << "\nIn modifyArray:" << std::endl;
   std::cout << "sizeof(arr): " << sizeof(arr) << " bytes" << std::endl; // SIZE OF THE POINTER to int
   std::cout << "sizeof(int): " << sizeof(int) << " bytes" << std::endl;
   std::cout << "Number of elements (incorrect): " << sizeof(arr) / sizeof(int) << std::endl;
}
