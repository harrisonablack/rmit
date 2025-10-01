#include <iostream>
#include "task.h"

int main() { 
   LogSanitizer sanitizer("User ID: ABC123, Code: AEIOU");
   sanitizer.sanitizeLog();
   std::cout << sanitizer.getSanitizedLog() << std::endl;

   return EXIT_SUCCESS;
}
