#include<iostream>
using namespace std;
    int sum(int ,int);
    float  sum(float,float);
    double sum(double ,double);
    int main(){
        cout << endl << sum(10,20);
        cout << endl << sum(10.56 ,20.89);
        cout << endl << sum(10.458,20.897);
        return 0;
    }
    int sum(int n1, int n2){
cout << "\nInt method";
return n1+n2;
    }
    
    float sum(float n1, float n2){
cout << "\nFloat method";
return n1+n2;
    }
    double sum(double n1 ,double n2){
        cout << "\nDouble method";
        return n1+n2;
    }


