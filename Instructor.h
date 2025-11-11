#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor : public Person{
    string department;
    int experienceYears;
    public:
    Instructor(){
        department = "";
        experienceYears = 0;
    }
    Instructor(string d, int e){
        department = d;
        experienceYears = e;
    }
    ~Instructor(){
    }
    void display();
};
#endif
