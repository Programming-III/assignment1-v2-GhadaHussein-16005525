#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

class Student : public Person{
  int yearLevel;
  string major;
  public:
  Student(){
    yearLevel = 0;
    major = "";
  }
  Student(int year, string m){
    yearLevel = year;
    major = m;
  }
  ~Student(){
  }
  void display();
};
#endif
