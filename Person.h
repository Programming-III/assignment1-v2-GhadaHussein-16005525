#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person{
    string name;
    int id;
    public:
    Person(){
        name = "";
        id = -1;
    }
    Person(string n, int i){
        name = n;
        id = i;
    }
    ~Person(){
    }
    void display();
};
#endif
