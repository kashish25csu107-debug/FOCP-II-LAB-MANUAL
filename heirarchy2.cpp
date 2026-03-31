#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    float salary;

public:
    Employee(string n ,float s){
        name = n;
        salary = s;
    }

    void displayDetails(){
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class Developer
class Developer : public Employee{
public:
    Developer(string n , float s):Employee(n ,s){}

    void displayRole(){
        cout << "Role: Developer" << endl;
    }
};

// Derived class Designer
class Designer : public Employee{
public:
    Designer(string n , float s):Employee(n ,s){}

    void displayRole(){
        cout << "Role: Designer" << endl;
    }
};

// Main function
int main(){
    Developer dev("kashish",100000);
    Designer des("Tulsi",50000);

    cout << "Developer details:" << endl;
    dev.displayDetails();
    dev.displayRole();

    cout << endl;

    cout << "Designer Details:" << endl;
    des.displayDetails();
    des.displayRole();

    return 0;
}


