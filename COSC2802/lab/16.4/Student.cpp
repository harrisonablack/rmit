#include "Student.h"


Student::Student(std::string f, std::string l, double g) {
	first = f; // first name
	last = l;  // last name
	gpa = g;   // grade point average
}

double Student::GetGPA() {
	return gpa;
}

std::string Student::GetFirst() {
	return first;
}

std::string Student::GetLast() {
	return last;
}
