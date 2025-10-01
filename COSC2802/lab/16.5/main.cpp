
#include <iostream>
#include <iomanip> 
#include "SelfPayKiosk.h"
 

int main() {
   SelfPayKiosk *kiosk = new SelfPayKiosk();

   // Test basic operations
   kiosk->ScanItem(20.49);
   kiosk->CheckOut();
   kiosk->MakePayment(25.20);
   
   std::cout << std::fixed << std::setprecision(2);
   std::cout << "Number of customers: " << kiosk->GetNumCustomers() << std::endl;
   std::cout << "Amount due: " << kiosk->GetAmountDue() << std::endl;
   std::cout << "Total Sales: " << kiosk->GetTotalSales() << std::endl;

   // Add statements as functions are completed to support development mode testing

   // Test simulateSales()
   kiosk->ResetKiosk();
   kiosk->SimulateSales(100, 5, 2.5);
   std::cout << "Number of customers: " << kiosk->GetNumCustomers() << std::endl;
   std::cout << "Amount due: " << kiosk->GetAmountDue() << std::endl;
   std::cout << "Total Sales: " << kiosk->GetTotalSales() << std::endl;

   return EXIT_SUCCESS;
}
