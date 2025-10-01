#include "FancyCar.h"

int main() {
   FancyCar car;
   car.Drive(50);
   cout << "Miles driven: " << car.CheckOdometer() << endl;
   cout << "Gas Tank: " <<  car.CheckGasGauge() << " gallons" << endl;
   
   /* Add statements as functions are completed to support development mode test */
   
   return 0;
}
