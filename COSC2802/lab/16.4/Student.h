#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>

class Student {
    public:
	   Student(std::string, std::string, double);
		double GetGPA();
		std::string GetFirst();
		std::string GetLast();

    private:
        std::string first;
        std::string last;
        double gpa;
};

#endif /* STUDENT_H_ */
