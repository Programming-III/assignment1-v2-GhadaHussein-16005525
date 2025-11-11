#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor : public Person{
  string department;
  int experienceYears;
  public:
  void display(){
    cout<<"Department: "<<department<<endl<<"Exp years: "<<experienceYears<<endl;
  }
};
#endif
