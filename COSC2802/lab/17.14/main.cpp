#include <iostream>
#include "task.h"
// #include "utilities.cpp"

int main() {
   int a = 10;   
   int b = 20;   
 
   PointerPair pair(a, b);

   std::cout << "Before swapping:\n" << pair.displayValues() << std::endl;
   pair.swapValues();
   std::cout << "After swapping:\n" << pair.displayValues() << std::endl;
   
   // std::cout << escapeString(pair.displayValues());
   
   return EXIT_SUCCESS;
}
