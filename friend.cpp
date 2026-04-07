#include<iostream>
using namespace std;
class rectangle{
    int length;
    int width;
    public:
    rectangle(){
        length =0;width=0;
    }
     rectangle(int l,int w){
        length =l;width =w;
     }
     void display(){
        cout << "\n Length =" << length;
        cout << "\n Width " << width;
     }
     friend void area (rectangle obj);
};
void area(rectangle obj){
    cout << "\n area = "<< obj.length*obj.width;

}
int main (){
    rectangle r1,r2(23,45);
    r1.display();
    area(r1);
    r2.display();
    area(r2);
    return 0;
}