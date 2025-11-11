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
  }
  Course(string code, string name, int max, Student* s, int curr){
    
  }
};
#endif
