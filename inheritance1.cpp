#include<iostream>
using namespace std;
class Person{
    string name;int age;
    public:
    Person(){ cout << "\n Person default constructor "; name ="default "; age =18;}
    Person(string nm,int ag)
    {
        cout << "\n Person parameterized constructor";
        name =nm; age =ag;
    }
    void display()
    {
        cout  << "\n name =" << name << "\n age =" << age;
    }
};
class Student:public Person {
    string rollno;
    public:
    Student(){
        cout << "\n Student default constructor" ; rollno ="25csu107";
    }
    Student(string nm,int ag,string rno):Person(nm,ag)//initialisation list
    {
        cout << "\n Student Parameterized";
        rollno =rno;
    }
    void display_student()
    {
        display();
        cout << "\n Rollno=" << rollno;
    }
};
int main(){
    Student p1,p2("Kashish",18,"25csu107");
    p1.display();
    p1.display_student();
    p2.display_student();
    return 0;
}