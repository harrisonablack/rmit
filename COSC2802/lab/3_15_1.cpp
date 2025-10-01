#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string inputString;

   getline(cin, inputString);

   if (inputString == "wR") {
      cout << "String is valid" << endl;
   } else {
      cout << "String is not valid" << endl;   
   }

   return 0;
}
