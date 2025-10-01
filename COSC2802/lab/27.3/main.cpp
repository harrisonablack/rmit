#include "Classes.h"
#include <iostream>
#include <vector>

int main() {
  std::string red = "Red";
  std::string blue = "Blue";
  Circle circle(red, 5.0);
  Rectangle rectangle(blue, 4.0, 6.0);

  std::vector<Shape *> shapes;
  shapes.push_back(&circle);
  shapes.push_back(&rectangle);

  for (Shape *shape : shapes) {
    std::cout << "Shape Colour: " << shape->GetColour() << std::endl;
    std::cout << "Shape Area: " << shape->Area() << std::endl;
  }

  return EXIT_SUCCESS;
}
