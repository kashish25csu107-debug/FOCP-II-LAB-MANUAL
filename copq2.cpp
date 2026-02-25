#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length ,width;
    
    public:
    void inputDimensions(){
        cout << "Enter length";
        cin >>length;
        cout << "Enter width";
        cin >> width;

    }
    float calculatearea(){
        return length*width;
    }
    float calculatePerimeter(){
    return  2*(length+width);
    }


void displayResult(){
    
       cout << "Area of Rectangle:" << calculatearea() << endl;
       cout << "Perimeter of Rectangle:" << calculatePerimeter() << endl;
}
};
int main(){
    Rectangle r;
    r.inputDimensions();
    r.displayResult();
     return 0;

}