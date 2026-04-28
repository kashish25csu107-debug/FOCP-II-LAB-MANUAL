#include<iostream>
using namespace std;
namespace Myspace{
    int x=10;
    void show(){
        cout << "Hello";
    }
}
int main(){
    int x=100;
    cout << "\n my space:" << Myspace::x;
    cout << "normal variable x:" << x;
    Myspace::show();
}