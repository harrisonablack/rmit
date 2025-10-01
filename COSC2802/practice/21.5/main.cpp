#include <iostream>
#include <string>
#include "task.h"

int main() {
   const char test[] = "code";

   bool duplicates = hasConsecutiveDuplicates(test);
   std::cout << std::boolalpha << duplicates << "\n";

    std::string result = cumulativeConcatenation(test);
    std::cout << result;

   return EXIT_SUCCESS;
}
