#include "FancyCar.h"

FancyCar::FancyCar() {
	gas = FULL_TANK;
	miles = 5;
	FancyCar::mpg = 24.0;
	FancyCar::model = "Old Clunker";
}

FancyCar::FancyCar(string carMake, double carMpg) {
	gas = FULL_TANK;
	miles = 5;
	FancyCar::mpg = carMpg;
	FancyCar::model = carMake;
}

// Return car model
string FancyCar::GetModel() {
	return FancyCar::model;
}

// Return miles per gallon (MPG)
double FancyCar::GetMPG() {
	return FancyCar::mpg;
}

// Return miles on odometer
int FancyCar::CheckOdometer() {
	return FancyCar::miles;
}

// Return amount of gas in tank
double FancyCar::CheckGasGauge() {
	return FancyCar::gas;
}

// Honk horn
void FancyCar::HonkHorn() {
	cout << "The " << FancyCar::model << " says beep beep!" << endl;
}

// Drive car requested miles but check for enough
// gas and check for positive value
void FancyCar::Drive(int milesToDrive) {
	int range = gas * mpg;

	if (milesToDrive > 0 && milesToDrive <= range) {
		gas -= milesToDrive * mpg;
		miles += milesToDrive;
	}
}

// Add gas to tank. Check for positive value.
void FancyCar::AddGas(double amtToAdd) {
	if (amtToAdd > 0) {
		gas += amtToAdd;
	}
}

// Set boolean variable to true
 void FancyCar::StartEngine(){
	engine = true;
}

// Set boolean variable to false
void FancyCar::StopEngine(){
	engine = false;
}
