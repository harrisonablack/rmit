#include "scoring.h"
#include <vector>
#include <algorithm>

int CheckSingles(std::vector<int>& diceValues, int goal) {
    int sum = 0;
    for (int val : diceValues) {
        if (val == goal) {
            sum += val;
        }
    }
    return sum;
}

int CheckThreeOfKind(std::vector<int>& diceValues) {
    for (int i = 0; i <= 2; ++i) {
        if (diceValues[i] == diceValues[i+1] && diceValues[i] == diceValues[i+2]) {
            return 30;
        }
    }
    return 0;
}

int CheckFourOfKind(std::vector<int>& diceValues) {
    for (int i = 0; i <= 1; ++i) {
        if (diceValues[i] == diceValues[i+1] &&
            diceValues[i] == diceValues[i+2] &&
            diceValues[i] == diceValues[i+3]) {
            return 40;
        }
    }
    return 0;
}

int CheckFiveOfKind(std::vector<int>& diceValues) {
    if (diceValues[0] == diceValues[4]) {
        return 50;
    }
    return 0;
}

int CheckFullHouse(std::vector<int>& diceValues) {
    bool isFullHouse =
        (diceValues[0] == diceValues[1] && diceValues[2] == diceValues[4] && diceValues[1] != diceValues[2]) ||  // AABBB
        (diceValues[0] == diceValues[2] && diceValues[3] == diceValues[4] && diceValues[2] != diceValues[3]) ||  // AAABB
        (diceValues[0] == diceValues[4]); // five of a kind

    return isFullHouse ? 35 : 0;
}

int CheckStraight(std::vector<int>& diceValues) {
    std::vector<int> straight1 = {1, 2, 3, 4, 5};
    std::vector<int> straight2 = {2, 3, 4, 5, 6};

    if (diceValues == straight1 || diceValues == straight2) {
        return 45;
    }
    return 0;
}

int FindHighScore(std::vector<int>& diceValues) {
    int highScore = 0;

    for (int i = 1; i <= 6; ++i) {
        highScore = std::max(highScore, CheckSingles(diceValues, i));
    }

    highScore = std::max(highScore, CheckThreeOfKind(diceValues));
    highScore = std::max(highScore, CheckFourOfKind(diceValues));
    highScore = std::max(highScore, CheckFiveOfKind(diceValues));
    highScore = std::max(highScore, CheckFullHouse(diceValues));
    highScore = std::max(highScore, CheckStraight(diceValues));

    return highScore;
}
