#include<iostream>
using namespace std;
class rectangle{
    int length;
    int width;
    static int count;
    public:
    rectangle(){
        length =0;width=0;count++;
    }
     rectangle(int l,int w){
        length =l;width =w;count++;
     }
     void display(){
        cout << "\n Length =" << length;
        cout << "\n Width " << width;
        cout << "\n Number of objects created:" << count;
     }
     
     
};
int rectangle::count;



int main (){
    rectangle r1;
    r1.display();
      rectangle r2(23,45);
    r2.display();
    rectangle r3;
    r3.display();

    return 0;
}