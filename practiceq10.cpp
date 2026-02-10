#include<iostream>
using namespace std;
void welcome(string ="Agent",string="");
int main(){
    welcome();
    welcome("Kashish");
    welcome("Kashish","Yadav");
    return 0;
}
//definition
void welcome(string fname ,string lname){
    cout << "\nWelcome "<<fname<<lname;
}