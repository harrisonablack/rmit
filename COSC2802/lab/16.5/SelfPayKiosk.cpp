#include "SelfPayKiosk.h"
// #include <iostream>

SelfPayKiosk::SelfPayKiosk(){
	customers = 0;
	sales = 0;
	due = 0;
	checked = false;
}

int SelfPayKiosk::GetNumCustomers() {
	return customers;
}

double SelfPayKiosk::GetTotalSales() {
	return sales;
}

double SelfPayKiosk::GetAmountDue() {
	return due;
}

void SelfPayKiosk::ScanItem(double price) {
	if (price >= 0) {
		due += price;
	}
}

void SelfPayKiosk::CheckOut() {
	due += (due * SALES_TAX);
	checked = true;
}

void SelfPayKiosk::MakePayment(double payment) {
	if (!checked) {
		return;
	}

	if (payment > due) {
		sales += due;
		++customers;
		due = 0;
		checked = false;
	} else if (payment > 0) {
		sales += payment;
		due -= payment;
	}
}

void SelfPayKiosk::ResetKiosk(){
	customers = 0;
	sales = 0;
	due = 0;
	checked = false;
}

void SelfPayKiosk::CancelTransaction() {
	if (!checked) {
		due = 0;
	}
}

void SelfPayKiosk::SimulateSales(int sales, double initPrice, double incrPrice) {
	for (int i = 0; i < sales; ++i) {
		ScanItem(initPrice);
		CheckOut();

		// std::cout << "Price: " << initPrice << std::endl;
		// std::cout << "Due: " << due << std::endl;
		// std::cout << "Sales: " << GetTotalSales() << std::endl;	

		MakePayment(due + 1);

		initPrice += incrPrice;
	}
}


