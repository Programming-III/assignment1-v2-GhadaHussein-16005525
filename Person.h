#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person{
  string name;
  int id;
  public:
  void display(){
    cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl;
  }
};
#endif
