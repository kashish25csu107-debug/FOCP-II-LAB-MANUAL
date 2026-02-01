#include<iostream>
using namespace std;
int main(){
 int marks1, marks2 ,marks3  ;
 cout << "Enter marks of student 1 ";
 cin >> marks1;
 cout << "Enter marks of student 2";
 cin >> marks2;
 cout << "Enter marks of student 3 ";
 cin >> marks3;
 float average =(marks1 +marks2+marks3)/3.0;
 cout << "The average marks of three students is"<<fixed << average;
 return 0;


}
