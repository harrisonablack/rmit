#include "task.h"

Student::Student(const std::string &name_val, int score_val) {
	this-> name = name_val;
	this-> score = score_val;
}

bool Student::operator<(const Student &other) {
	// std::cout << "<" << std::endl;
	if (Student::score < other.score) {
		return true;
	} else {
		return false;
	}
}

bool Student::operator>(const Student &other) {
	// std::cout << ">" << std::endl;
	if (Student::score > other.score) {
		return true;
	} else {
		return false;
	}
}

bool Student::operator==(const Student &other) {
	// std::cout << "==" << std::endl;
	// std::cout << this->name << " " << other.name << std::endl;
	if (Student::name == other.name) {
		return true;
	} else {
		return false;
	}
}

bool Student::operator!=(const Student &other) {
	// std::cout << "!=" << std::endl;
	// std::cout << this->name << " " << other.name << std::endl;
	if (Student::name != other.name) {
		return true;
	} else {
		return false;
	}
}

void Student::print() {
	std::cout << this->name;
}
