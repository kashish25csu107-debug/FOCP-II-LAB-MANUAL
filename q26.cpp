#include<iostream>
using namespace std;
int main(){
   float marks[5];
    float total =0,percentage;

    cout << "Enter 5 subject marks:/n";

    //input
    for(int i=0; i<5;i++){
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total +=marks[i];

    }
    
    //percentage
    percentage =(total/5)*100;


    cout << "Total marks =" << total << endl;
    cout << "Percentage =" << percentage << "%" << endl;
}