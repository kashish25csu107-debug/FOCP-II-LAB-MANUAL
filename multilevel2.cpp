#include<iostream>
using namespace std;
class Device{
    public:
    void powerOn(){
        cout << "The power is ON :"<< endl;
    }

};
 class computer:public Device{
    public:
    void process(){
        cout << "The computer is processing:" << endl;
    }


 };
 class Laptop:public computer{
    public:
   void carry(){
    cout << "carry your laptop:"<< endl;
   }
 };
 int main(){
    Laptop l;
    l.powerOn();//from Device
    l.process();//from computer
    l.carry();//from laptop

    return 0;
 }