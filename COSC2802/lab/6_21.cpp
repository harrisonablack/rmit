#include <iostream>
using namespace std;

int main() {
	double loan, payment, rate;
	cin >> loan >> payment >> rate;

	int months = 0;

	if (loan * (1 + rate) - payment >= loan) {
		cout << "Cannot pay off loan" << endl;
		return 0;
	}

	while (loan > 0.0) {
		loan = loan * (1 + rate); 
		loan = loan - payment;           
		months++;
	}

	cout << months << " payment" << (months == 1 ? "" : "s") << endl;
	return 0;
}
