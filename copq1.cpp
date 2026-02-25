#include<iostream>
using namespace std;
class Student{
    private:
    int rollNo;
    string name;
    int marks1,marks2,marks3;
public:
void inputDetails(){
cout <<"Enter Student rollNo";
cin >> rollNo;

cout << "Enter Name";
cin >> name;

cout << "Enter marks in subject 1";
cin>> marks1;

cout << "Enter marks in subject 2";
cin >> marks2;

cout << "Enter marks in subject 3";
cin >> marks3;

}
void displayDetails(){
    int total =marks1+marks2+marks3;
    cout << "Roll NO:" << rollNo << endl;
    cout << "Name" << name << endl;
    cout << "Marks 1:" << marks1 << endl ;
    cout << "Marks 2:" << marks2 << endl ;
    cout << "Marks 3:" << marks3 << endl ;
    cout << "Total" << total << endl;

}
};
int main(){
    Student s;
    s.inputDetails();
    s.displayDetails();

    return 0;

}