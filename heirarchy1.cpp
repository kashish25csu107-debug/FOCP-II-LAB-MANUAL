#include<iostream>
using namespace std;
// base class
class shape{
    public:
    void draw(){
        
        cout << "Drawing a shape:" << endl;
    }

};
// Derive class circle
class circle:public shape{
    private:
    float radius;
    public:
    circle(float r){
        radius =r;
    }
    void area(){
        cout << "Area of circle is :" << 3.14 * radius *radius << endl;
    }

};

// Derive class rectangle
class rectangle:public shape{
    private:
    float length , width;
    public:
    rectangle(float l ,float w){
       length =l;
       width =w;
    }
    void area(){
        cout << "Area of rectangle is :" <<length*width << endl;
    }

};
//Main function
int main(){
    circle c(5);
    rectangle r(6,5);

    c.draw();
    r.draw();

     c.area();
     r.area();

    
     return 0;

}