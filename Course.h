#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;

class Course{
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    Course(){
        courseCode = "";
        courseName = "";
        maxStudents = 0;
        currentStudents = 0;
    }
    Course(string code, string name, int max, Student* s, int curr){
        courseCode = code;
        courseName = name;
        maxStudents = max;
        students = s;
        currentStudents = curr;
    }
    ~Course(){
        delete[] students;
    }
    void addStudent(const Student& s);
    void displayCourseInfo();
};
#endif
