#include<iostream>
using namespace std;
class shape{
   public:
   shape(){
    cout << "\n shape default const called";
   }
   virtual void area(){
    cout << "\n no dimension no area";
   }
   void display(){
    cout << " \n we ae 2D shapes";
   }
};
class rectangle:public shape{
    
     public:
       
      int length;int width;
        
        rectangle(int l=5,int w=10):length(l),width(w)
        {cout <<"\n Rectangle object created";}
        
    
    void area()//overriding
    {
        cout << "\n Area  " << length*width;
    }

};

int main(){
    shape *s1,s2;
    rectangle r2(50,45);
    s1=&s2;
    s1->area();
    //r2.area();
    s1=&r2;
    s2=r2;
    // cout << s1.length;
    s1->area();
    s2.area();
     return 0;
}