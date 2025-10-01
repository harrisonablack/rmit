#include <iostream>
#include <cstdlib>  // For srand() and rand()
using namespace std;

int main() {   
	// std::srand(1);  // DO NOT REMOVE - Fixed seed ensures same output every time 
	
	int height;
	int width;
	int tigers;
	int koalas;
	
	cin >> height;
	cin >> width;
	cin >> koalas;
	cin >> tigers;


	cout << "The zoo grid dimensions are: " << endl << "height=" << height << endl << "width=" << width << endl << endl;
	cout << "The zoo will have:" << endl;

	if (koalas <= 0) {
		cout << "No koalas" << endl;
	} else if (koalas==1){
		cout << "1 koala" << endl;
	} else {
		cout << koalas << " koalas" << endl;
	}

	if (tigers <= 0) {
		cout << "No tigers" << endl; 
	} else if (tigers==1) {
		cout << "1 tiger" << endl;
	} else {
		cout << tigers << " tigers" << endl;
	}

	cout << endl;

	// cout << "Random Zoo Location: (" << (rand() % (height-2)) + 1 << ", " << (rand() % (width-2)) +1 << ")" << endl;
	cout << "Random Zoo Location: (" << (rand() % height) +1 << ", " << (rand() % width) +1 << ")" << endl;

	// return EgIT_SUCCESS;
	return 0;
}
