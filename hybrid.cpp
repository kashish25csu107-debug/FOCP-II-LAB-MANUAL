#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A():a(150){
        cout << "Default constructor called:" << endl;
    }
     ~A(){
     cout << "Destructor called:" << endl;
    }
    void displayA(){
        cout << "value of a is:" << a<< endl;
    }
};

    class B:virtual public A{
        protected:
        int b;
        public:
        B():b(219){
         cout << "Default constructer called:" << endl;
        }
         ~B(){
        cout << "Default destructor called:" << endl;
    }
        void displayB(){
            cout << "value of b is:" << b<< endl;
        }
    
    };
    class C:virtual public A{
        protected:
        int c;
        public:
        C():c(300){
         cout << "Default constructer called:" << endl;
        }
         ~C(){
        cout << "Default destructor called:" << endl;
    }
        void displayC(){
            cout << "value of c is:"  << c<< endl;
        }
    
    };
    class D:public B,public C{
        protected:
        int d;
        public :
        D():d(500){
            cout << "Default constructor called:" << endl;
        }
        ~D(){
            cout << "Destructor called:" << endl;
        }
        void displayD(){
             displayA();
              displayB();
            displayC();
                cout <<"value of d is:" << d <<endl;

        }
    };
    
    int main(){
        D dobj;
        dobj.displayD();
        return 0;

    }






