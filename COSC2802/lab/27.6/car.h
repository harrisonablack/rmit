#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include <sstream>
#include <string>

class Car : public Vehicle {
public:
	Car(std::string type, double speed) : Vehicle(type, speed) {}
  std::string print() {
    std::ostringstream oss;

    oss << "Car - Type: " << this->type << ", Speed: " << std::fixed
        << std::setprecision(3) << this->speed;

    return oss.str();
  }
};

#endif // CAR_H
