#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    public:
    Employee(string n):name(n){};

};
class Department{
    protected:
    string Departmentname;
    public:
    Department(string d):Departmentname(d){};
};
class Manager:public Employee,public Department{
    public:
    Manager(string n,string d):Employee(n),Department(d){}
    void displayname(){
        void displayEmployeename();
        void displayDepartmentname();
        
        cout << "Name: " << name << endl;
        cout << "Department: " << Departmentname << endl;
    }

};
int main(){
    Manager r("kashish ","Btech CSE");
     r.displayname();
    return 0;
}

