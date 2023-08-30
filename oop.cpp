#include<iostream>
#include "string.h"
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    ~Person(){
        //delete[] name;
        //delete age;
    }

    Person(const Person &p){
        name=p.name;
        age=p.age;
    }

    Person &operator=(const Person &p){
        name=p.name;
        age=p.age;
        return *this;
    }

    void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

int main(){
    Person p1("Ram",20);
    p1.show();
}