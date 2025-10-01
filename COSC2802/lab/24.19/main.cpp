#include <iostream>
#include <string>
#include <vector>

#include "Animal.h"
#include "Dog.h"

int main() {

  std::vector<Animal *> animals;
  int numAnimals = 0;
  std::cin >> numAnimals;

  std::string objectType;
  std::string name;
  int age;
  std::string breed;
  for (int i = 0; i < numAnimals; i++) {
    std::cin >> objectType;
    if (objectType == "Animal") {
      std::cin >> name >> age;
      animals.push_back(new Animal(name, age));
    } else if (objectType == "Dog") {
      std::cin >> name >> age >> breed;
      animals.push_back(new Dog(name, age, breed));
    }
  }

  for (auto a : animals) {
    a->print();
    std::cout << std::endl;
  }

  return 0;
}
