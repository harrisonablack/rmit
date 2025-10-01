#ifndef TAX_CALCULATOR_H
#define TAX_CALCULATOR_H

#include <string>

int CalcAGI(int wages, int interest, int unemployment);
int GetDeduction(int status);
int CalcTaxable(int agi, int deduction);
int CalcTax(int status, int taxable);
int CalcTaxDue(int tax, int withheld);

#endif // TAX_CALCULATOR_H
