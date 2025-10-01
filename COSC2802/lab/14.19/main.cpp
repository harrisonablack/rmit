#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
	Triangle triangle1;
	Triangle triangle2;

	double ab, ah, bb, bh;
	cin >> ab >> ah >> bb >> bh;

	triangle1.SetBase(ab);
	triangle1.SetHeight(ah);

	triangle2.SetBase(bb);
	triangle2.SetHeight(bh);
	

	cout << "Triangle with smaller area:" << endl;

	(triangle1.GetArea() < triangle2.GetArea()) ? triangle1.PrintInfo() : triangle2.PrintInfo();

	return 0;
}
