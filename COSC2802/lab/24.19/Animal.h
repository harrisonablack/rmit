#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include <string>

class Animal {
private:
  
public:
	std::string name;
  int age;

  Animal(std::string n, int a) {
    this->name = n;
    this->age = a;
  }
  virtual void print() {
    std::cout << this->name << " is " << this->age << " years old" << std::endl;
  }
};

#endif
