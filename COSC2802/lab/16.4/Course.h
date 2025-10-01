#ifndef COURSE_H_
#define COURSE_H_

#include <iostream>
#include <vector>
#include "Student.h"

class Course
{
public:
    void PrintRoster();
    void AddStudent(Student);

private:
    std::vector<Student> roster;
};

#endif /* COURSE_H_ */
