#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

Artist::Artist() {
	Artist::artistName = "unknown";
	Artist::birthYear = -1;
	Artist::deathYear = -1;
}

Artist::Artist(string artistName, int birthYear, int deathYear) {
	Artist::artistName = artistName;
	Artist::birthYear = birthYear;
	Artist::deathYear = deathYear;
}

string Artist::GetName() {
	return Artist::artistName;
}

int Artist::GetBirthYear() {
	return Artist::birthYear;
}

int Artist::GetDeathYear() {
	return Artist::deathYear;
}

void Artist::PrintInfo() {
	cout << "Artist: " << Artist::artistName;

	if (Artist::deathYear == -1) {
		if (Artist::birthYear == -1) {
			cout << " (unknown)" << endl;
		} else {
			cout << " (" << Artist::birthYear << " to present)" << endl;
		}
	} else {
		cout << " (" << Artist::birthYear << " to " << Artist::deathYear << ")" << endl;
	}
}



	// 	void PrintInfo() const;
	// private:
	// 	string artistName;
	// 	string birthYear;
	// 	string deathYear;

