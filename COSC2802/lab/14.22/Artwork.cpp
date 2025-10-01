#include "Artwork.h"
#include "Artist.h"
#include <iostream>

Artwork::Artwork(){
	Artwork::title = "unknown";
	Artwork::yearCreated = -1;
	Artwork::artist = Artist();
}

Artwork::Artwork(string title, int yearCreated, Artist artist) {
	Artwork::title = title;
	Artwork::yearCreated = yearCreated;
	Artwork::artist = artist;
}

string Artwork::GetTitle() {
	return Artwork::title;
}

int Artwork::GetYearCreated() {
	return Artwork::yearCreated;
}

void Artwork::PrintInfo() {
	Artwork::artist.PrintInfo();
	std::cout << "Title: " << Artwork::GetTitle() << ", " << Artwork::GetYearCreated() << std::endl;
}
