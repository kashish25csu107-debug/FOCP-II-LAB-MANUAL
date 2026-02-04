#include<iostream>
using namespace std;
int main(){
    int a , b ,c;
    cout << "Enter a";
    cin >> a;
    cout << "Enter b";
    cin >> b;
    cout << "Enter c";
    cin >> c;
    if(a==b&& b==c) {
        cout << "Equiletral Triangle";

    }
    else if(a==b && a!=c){
        cout << "Isosceles Triangle";
    
    }
    else{
        cout  << "Scalene Triangle";
    }
    return 0;
}