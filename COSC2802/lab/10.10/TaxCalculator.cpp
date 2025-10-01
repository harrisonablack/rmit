#include "TaxCalculator.h"
#include <cstdlib>

int CalcTaxDue(int tax, int withheld);

int GetDeduction(int status) {
	switch (status) {
		case 0:
			return 6000;
			break;
		case 1:
			return 12000;
			break;
		case 2:
			return 24000;
			break;
		default:
			return 6000;
			break;
	}
}

int CalcAGI(int wages, int interest, int unemployment) {
	return abs(wages) + abs(interest) + abs(unemployment);
}


int CalcTaxable(int agi, int deduction) {
	return agi - deduction;
}

int CalcTax(int status, int taxable) {
	int tax = 0;

	if (status == 2) {  // Married Filers
		if (taxable <= 20000) {
			tax = taxable * 0.10;
		} else if (taxable <= 80000) {
			tax = 2000 + (taxable - 20000) * 0.12;
		} else {
			tax = 9200 + (taxable - 80000) * 0.22;
		}
	} else {  // Dependent or Single Filers
		if (taxable <= 10000) {
			tax = taxable * 0.10;
		} else if (taxable <= 40000) {
			tax = 1000 + (taxable - 10000) * 0.12;
		} else if (taxable <= 85000) {
			tax = 4600 + (taxable - 40000) * 0.22;
		} else {
			tax = 14500 + (taxable - 85000) * 0.24;
		}
	}

	return tax;
}
