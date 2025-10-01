#include <iostream>
#include "Triangle.h"
#include "Triangle.cpp" // hidden
#include "Rectangle.h"
#include "Rectangle.cpp" // hidden
#include "Pentagon.h"

// Function Prototypes
Triangle resize(Triangle t, int s);
Rectangle resize(Rectangle r, int s);
Pentagon resize(Pentagon p, int s);


int main() {
   Triangle t = Triangle(1, 2, 3);
   Rectangle r = Rectangle(5, 6, 5, 6);
   Pentagon p = Pentagon(3, 4, 5, 6, 7);
   
   auto newTriangle = resize(t, 3);
   auto newRectangle = resize(r, 2);
   auto newPentagon = resize(p, 10);
   
   std::cout << "Resized Triangle Dimensions: ";
   newTriangle.printTri();
   std::cout << "Resized Rectangle Dimensions: ";
   newRectangle.printRect();
   std::cout << "Resized Pentagon Dimensions: ";
   newPentagon.printPent();
   
   return EXIT_SUCCESS;
}

Triangle resize(Triangle t, int s){
	return Triangle(t.getSideA()*s, t.getSideB() *s, t.getSideC()*s);
}

Rectangle resize(Rectangle r, int s) {
	return Rectangle(r.getSideA() * s, r.getSideB() * s, r.getSideC() * s, r.getSideD() * s);
}

Pentagon resize(Pentagon p, int s) {
	return Pentagon(p.getSideA() * s, p.getSideB() * s, p.getSideC() * s, p.getSideD() * s, p .getSideE() * s);
}


