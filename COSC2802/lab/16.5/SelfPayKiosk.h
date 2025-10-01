#include <fstream>
#ifndef SELF_PAY_KIOSK_H
#define SELF_PAY_KIOSK_H

class SelfPayKiosk {
   private:
      const double SALES_TAX = 0.07;
			int customers;
			double sales;
			double due;
			bool checked;

   public:
      SelfPayKiosk();
      double GetTotalSales();
      double GetAmountDue();
      int GetNumCustomers();
      void ScanItem(double price);
      void CheckOut();
      void CancelTransaction();
      void ResetKiosk();
      void MakePayment(double payment);
      void SimulateSales(int numSales, double initialPrice, double incrPrice);
};

#endif
