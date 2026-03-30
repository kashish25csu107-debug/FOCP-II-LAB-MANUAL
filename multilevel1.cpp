#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout << "Animal is eating :"<< endl;
    }

};
 class dog:public animal{
    public:
    void bark(){
        cout << "Dog is barking:" << endl;
    }


 };
 class puppy:public dog{
    public:
   void weep(){
    cout << "Puppy is weeping:"<< endl;
   }
 };
 int main(){
    puppy p;
    p.eat();//from Animal
    p.bark();//from Dog
    p.weep();//from puppy

    return 0;
 }