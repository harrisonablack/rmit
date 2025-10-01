#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int years;
	int weight;
	int heart;
	int time;

	double calories;

	cin >> years;
	cin >> weight;
	cin >> heart;
	cin >> time;

	calories = (((years * 0.2757) + (weight * 0.03295) + (heart * 1.0781) - 75.4991) * time ) /8.368; 

	cout << "Calories: " << fixed << setprecision(2) << calories << " calories" << endl;


	
	return 0;
}
