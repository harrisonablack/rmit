#include "Course.h"
#include "Student.h"

void Course::AddStudent(Student student) {
	roster.push_back(student);
}

void Course::PrintRoster() {
	for (Student s : roster) {
		std::cout << s.GetFirst() << " " << s.GetLast() << " (GPA: " << s.GetGPA() << ")" << std::endl;
	}
	std::cout << "Students: " << roster.size();
}
