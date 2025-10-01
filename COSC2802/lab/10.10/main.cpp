#include <iostream>
#include "TaxCalculator.h"

int main() {

    // /***********************************************************************
    //  * This code is provided as a starting point for development and testing
    //  * Please modify the code below as you develop your program.
    //  * **********************************************************************/

    int wages, interest, unemployment, status, withheld;
    int tax, agi, due, deduction, taxable;

    wages = 20000;
    interest = 23;
    unemployment = 500;
    status = 1;
    withheld = 400;

    // Calculate AGI and taxable amount
    agi = CalcAGI(wages, interest, unemployment);
    std::cout << "AGI: $" << agi << std::endl;

    deduction = GetDeduction(status);
    std::cout << "Deduction: $" << deduction << std::endl;

    // Calculate taxable income
    taxable = CalcTaxable(agi, deduction);
    std::cout << "Taxable income: $" << taxable << std::endl;

    // Calculate tax
    tax = CalcTax(status, taxable);
    std::cout << "Federal tax: $" << tax << std::endl;

    // Calculate tax due
    due = CalcTaxDue(tax, withheld);
    std::cout << "Tax due: $" << due << std::endl;

    return EXIT_SUCCESS;
}
