#ifndef TRAIN_H
#define TRAIN_H
#include "vehicle.h"
#include <string>

class Train : public Vehicle {
public:
  Train(std::string type, double speed) : Vehicle(type, speed) {};
  std::string print() {
    std::ostringstream oss;

    oss << "Train - Type: " << this->type << ", Speed: " << std::fixed
        << std::setprecision(3) << this->speed;

    return oss.str();
  }
};

#endif // TRAIN_H
