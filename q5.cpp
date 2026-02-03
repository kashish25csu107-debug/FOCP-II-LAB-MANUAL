#include<iostream>
using namespace std;
int main() {
    int x=10;
    int y=20;
    int temp;
   temp=x;
    x=y;
    y=temp;
    cout <<"After swapping :"  << endl <<"x :" << x <<  endl << " y:" <<  y<< endl;
    return 0;
}