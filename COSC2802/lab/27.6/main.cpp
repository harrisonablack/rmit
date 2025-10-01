#include "car.h"
#include "train.h"
#include "vehicle.h"
#include <vector>

int main() {
  Vehicle v("Generic", 0.0);
  std::cout << v.print() << std::endl;

  Car c("Toyota", 1.123123);
  std::cout << c.print() << std::endl;

  Train t("Siemens", 123.456789);
  std::cout << t.print() << std::endl;

  std::vector<Vehicle *> vehicles;
  vehicles.push_back(new Vehicle("Generic", 0.0));
  vehicles.push_back(new Car("Honda", 60.0));
  vehicles.push_back(new Train("Xtrapolis", 100.0));
}
