#include<iostream>
using namespace std;
class shape{
   public:
   shape(){
    cout << "\n shape default const called";
   }
   virtual void area()=0;
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
   
    rectangle r2(50,45);
     return 0;
}