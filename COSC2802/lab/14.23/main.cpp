#include <iostream>
#include "VendingMachine.h"
using namespace std;

int main() {
	int purchase;
	int restock;
	int repurchase;

	VendingMachine vending = VendingMachine();

	cin >> purchase >> restock >> repurchase;

	vending.Purchase(purchase);
	vending.Restock(restock);
	vending.Purchase(repurchase);

	vending.Report();

	return 0;
}
