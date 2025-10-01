#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double dollars;
	int quarters;
	int dimes;
	int nickels;

	cin >> nickels;
	cin >> dimes;
	cin >> quarters;

	cout << fixed << setprecision(2) << "Amount: $" << (nickels * 0.05) + (dimes * 0.1) + (quarters * 0.25) << endl;

	return 0;
}
