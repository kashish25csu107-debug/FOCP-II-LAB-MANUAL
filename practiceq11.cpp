#include<iostream>
using namespace std;
 void swap(int &r1 ,int &r2){
    int temp = r1;
    r1=r2;
    r2 = temp;

 }
int main(){
    int a,b;
    a=30 ,b=55;
    swap(a,b);
    cout << a <<" ," << b;
 return 0;    
}