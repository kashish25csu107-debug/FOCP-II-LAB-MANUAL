#include<iostream>
using namespace std;
class shape{
   public:
   void area(){
    cout << "\n nodimension,no area";
   }
   void perimeter(){
    cout << "\n no dimension ,no perimeter";
   }
   void dimension (){
    cout << "\n nothing to display";
   }
   void display(){
    cout << "\n ******* We are 2D shapes";
   }
};
class square:public shape{
    
     public:
       
      int side;
        public:
        square(){side=0;}
        square(int s ){side =s;}
    
    void area()//overriding
    {
        cout << "\n Area of square " << side*side;
    }
    void perimeter()//overriding
    {
        cout << "\n o perimeter of square =" << 4*side;
    }
    void dimension()//overriding
    {
        cout << "\n sides is :n" << side;
    }
};

int main(){
    shape s1;
    square s,ss(12);
    s1.area();s1.perimeter();s1.dimension();s1.display();
     ss.area();ss.perimeter();ss.dimension();s1.display();
     ss.shape::area();
     ss.display();
     return 0;
}