#ifndef SCORING_H
#define SCORING_H

#include <vector>

int CheckSingles(std::vector<int>& diceValues, int goal);
int CheckThreeOfKind(std::vector<int>& diceValues);
int CheckFourOfKind(std::vector<int>& diceValues);
int CheckFiveOfKind(std::vector<int>& diceValues);
int CheckFullHouse(std::vector<int>& diceValues);
int CheckStraight(std::vector<int>& diceValues);
int FindHighScore(std::vector<int>& diceValues);

#endif // SCORING_H
