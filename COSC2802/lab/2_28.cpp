#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x;
	double y;
	double z;

	double a;
	double b;
	double c;
	double d;

	cin >> x;
	cin >> y;
	cin >> z;

	a = pow(x,z);
	b = pow(x,pow(y,z));
	c = fabs(y);
	d = sqrt(pow((x*y),z));

	cout << a << " " << b << " " << c << " " << d << endl;

	return 0;
}
