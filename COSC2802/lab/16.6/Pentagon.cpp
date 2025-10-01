#include "Pentagon.h"
#include <iostream>

Pentagon::Pentagon(int a, int b, int c, int d, int e) {
	sideA = a;
	sideB = b;
	sideC = c;
	sideD = d;
	sideE = e;
}

void Pentagon::printPent() const {
	std::cout << "(";
	std::cout << sideA << ", "; 
	std::cout << sideB << ", "; 
	std::cout << sideC << ", "; 
	std::cout << sideD << ", "; 
	std::cout << sideE << ")" << std::endl; 
}

int Pentagon::getSideA() {
	return sideA;
}

int Pentagon::getSideB() {
	return sideB;
}

int Pentagon::getSideC() {
	return sideC;
}

int Pentagon::getSideD() {
	return sideD;
}

int Pentagon::getSideE() {
	return sideE;
}
