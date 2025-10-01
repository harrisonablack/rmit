#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;
// void SetName(string name);
// void SetWins(int wins);
// void SetLosses(int losses);
//
// string GetName();
// int GetWins();
// int GetLosses();
//
// double GetWinPercentage();
// void PrintStanding();
//

void Team::SetName(string name) {
	Team::name = name;
}

void Team::SetWins(int wins) {
	Team::wins = wins;
}

void Team::SetLosses(int losses) {
	Team::losses = losses;
}

string Team::GetName() {
	return Team::name;
}

int Team::GetWins() {
	return Team::wins;
}

int Team::GetLosses() {
	return Team::losses;
}

double Team::GetWinPercentage() {
	return static_cast<double>(Team::wins) / (Team::wins + Team::losses);
}

void Team::PrintStanding() {
	cout << "Win percentage: " << fixed << setprecision(2) << GetWinPercentage() << endl;

	if (GetWinPercentage() >= 0.5) {
		cout << "Congratulations, Team " << Team::name << " has a winning average!" << endl; 
	} else {
		cout << "Team " << Team::name << " has a losing average.";
	}
}
