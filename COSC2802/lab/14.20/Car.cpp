#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

void Car::SetPurchasePrice(int purchasePrice) {
	Car::purchasePrice = purchasePrice;
}

int Car::GetPurchasePrice() {
	return Car::purchasePrice;
}


void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

void Car::PrintInfo() {
	cout << "Car's information:" << endl;
	cout << "  Model year: " << Car::modelYear << endl;
	cout << "  Purchase price: $" << Car::purchasePrice << endl;
	cout << "  Current value: $" << static_cast<int>(Car::currentValue) << endl;
}
