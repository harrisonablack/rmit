#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;
	int num4;

	int a;
	int b;
	double c;
	double d;

	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;

	a = (num1 * num2 * num3 * num4);
	b = (num1 + num2 + num3 + num4);

	c = (static_cast<double>(num1) * num2 * num3 * num4);
	d = b /4.0; 
	
	cout << a << " " << b/4 << endl;
	cout << fixed << setprecision(3) << c << " " << d << endl;


	return 0;
}
