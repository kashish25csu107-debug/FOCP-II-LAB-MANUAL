#include<iostream>
using namespace std;
int main(){
    int a , b,c ,D;
    cout << "Enter a";
    cin >> a;
    cout << "Enter b";
    cin >> b;
    cout << "Enter c";
    cin >> c;
    D=b*b -4*a*c;
    if(D>0){
        cout << "Two real and distinct roots";
    }
    else if(D =0){
        cout << "Two real and equal roots";

    }
    else{
        cout << "Two cpmplex(imaginary) roots";
    }
    return 0;
}