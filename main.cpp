#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;
void Person :: display(){
    cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl;
}
void Student :: display(){
    cout<<"Student info: "<<endl;
    cout<<"Name: "<<getName()<<endl<<"Year: "<<yearLevel<<endl;
}
void Instructor :: display(){
    cout<<"Instructor info: "<<endl;
    cout<<"Name: "<<getName()<<endl<<"Department: "<<department<<endl<<"Experience: "<<experienceYears<<endl;
}
void Course :: displayCourseInfo(){
    cout<<"Course: "<<courseCode<<" - "<<courseName<<endl<<"Max students: "<<maxStudents<<endl<<
    "Currently Enrolled: ";
}
int main(){
    Student s;
    Instructor i;
    Course c;
    s.display();
    i.display();
    c.displayCourseInfo();
    return 0;
}
