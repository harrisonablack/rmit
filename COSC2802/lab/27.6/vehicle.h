#ifndef VEHICLE_H
#define VEHICLE_H

#include <iomanip>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>

// Your declaration of the class Vehicle goes here

class Vehicle {
private:
public:
  std::string type;
  double speed;

  Vehicle(std::string type, double speed) {
    this->speed = speed;
    this->type = type;
  }

  virtual std::string print() {
    std::ostringstream oss;

    oss << "Vehicle - Type: " << this->type << ", Speed: " << std::fixed
        << std::setprecision(3) << this->speed;

    return oss.str();
  }
};

#endif // VEHICLE_H
