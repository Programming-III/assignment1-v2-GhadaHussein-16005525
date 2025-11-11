#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

class Student : public Person{
  int yearLevel;
  string major;
  public:
  void display(){
    cout<<"Year lvl: "<<yearLevel<<endl<<"Major: "<<major<<endl;
  }
};
#endif
