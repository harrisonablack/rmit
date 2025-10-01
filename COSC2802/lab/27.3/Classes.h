#ifndef CLASSES_H
#define CLASSES_H

#include <string>

class Shape {
protected:
  std::string colour;

public:
  Shape(std::string &c);
  std::string GetColour();
  virtual double Area();
};

class Circle : public Shape {
public:
  Circle(std::string &c, double r);

  double Area() override;

private:
  double radius;
};

class Rectangle : public Shape {
private:
  double width;
  double height;

public:
  Rectangle(std::string &c, double w, double h);

  double Area() override;
};

#endif
