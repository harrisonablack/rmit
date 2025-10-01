#include <iostream> 
#include <iomanip>


int main() {
   int timeHour;      // Time of travel hour
   int timeMinute;    // Time of travel minute
   char inputColon;   // Used to read time format
   double tollAmount;
   
   
   // Read an integer (hour), colon (char), and integer (minute)
   std::cin  >> timeHour >> inputColon >> timeMinute;
   
   // Determine toll based on hour of travel
   if (timeHour < 6) {         // Before 6:00 am
      tollAmount = 1.55;
   } else if (timeHour < 10) {   // 6 am to 9:59 am
      tollAmount = 4.65;
   } else if (timeHour < 18) {   // 10 am to 5:59 pm
      tollAmount = 2.35;
   } else {                      // 6 pm and after
      tollAmount = 1.55;
   }
   
   // Output time and toll amount
   std::cout << "Toll at " << timeHour << ":";
   
   // Output minute with formatting (discussed elsewhere) to
   // print two digits for minutes.
   std::cout << std::setw(2) << std::setfill('0') << timeMinute;
   std::cout << " is " << tollAmount << "\n";
   
}
