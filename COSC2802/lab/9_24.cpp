#include <iostream>
using namespace std;

int Fibonacci(int n) {
	if (n < 0) { return -1; }
   
	int a, b, c;
	a = 0;
	b = 1;
	c = 0;
	for (int i = 0; i < (n-1); i++){
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}

int main() {
   int startNum;
      
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}
