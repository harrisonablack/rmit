#include <iostream>
#include <vector>
#include "task.h"

int main()
{
   int loc1_x;
   int loc1_y;
   int loc2_x;
   int loc2_y;
   std::cin >> loc1_x;
   std::cin >> loc1_y;
   Location loc1(loc1_x, loc1_y);
   std::cin >> loc2_x;
   std::cin >> loc2_y;
   Location loc2(loc2_x, loc2_y);
   
   if (loc1 == loc2)
      std::cout << "SAME\n";
   else
      std::cout << "DIFFERENT\n";


    return EXIT_SUCCESS;
}
