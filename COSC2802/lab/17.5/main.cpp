#include <iostream>

class Rectangle {
	private:
		double length;
		double width;

	public:
		void setDimensions(double length, double width) {
			Rectangle::length = length;
			Rectangle::width = width;
		}

		void increaseDimensions(double length, double width) {
		if (length > Rectangle::length || width > Rectangle::width){
			std::cout << "Dimensions increased" << std::endl;
		} else {
			std::cout << "Dimensions NOT increased" << std::endl;
		} 

		if (length > Rectangle::length) {
			Rectangle::length = length;
		} 

		if (width > Rectangle::width) {
			Rectangle::width = width;
		}
	}

double getWidth() {
return width;
}
double getHeight() {
return length;
}
};

int main() {
Rectangle rect;
double w1, h1;
w1 = h1 = 0;

rect.setDimensions(5.0, 3.0); 

std::cin >> w1;
std::cin >> h1;

rect.increaseDimensions(w1,  h1);

std::cout << "width: " << rect.getWidth() << " height: " << rect.getHeight() << std::endl;

return EXIT_SUCCESS;
}
