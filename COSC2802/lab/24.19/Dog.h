#ifndef DOG
#define DOG

#include "Animal.h"
#include <iostream>
#include <string>

class Dog : public Animal {
private:
  std::string breed;

public:
  Dog(std::string n, int a, std::string b) : Animal(n, a) { this->breed = b; };
  void print() {
    std::cout << this->name << " is " << this->age << " years old and is a "
              << this->breed << std::endl;
  }
};
#endif
