#include <iostream>
#include <vector>
#include <algorithm>
#include "scoring.h"

int main() {
   std::vector<int> diceValues(5);
   int highScore = 0;

   // Fill array with five diceValues from input
   for(int i = 0; i < 5; ++i) {
      std::cin >> diceValues.at(i);
   }

   // Place diceValues in ascending order
   std::sort(diceValues.begin(), diceValues.end());

   // Find high score and output
   highScore = FindHighScore(diceValues);
   std::cout << "High score: " << highScore << std::endl;

   return EXIT_SUCCESS;
}
