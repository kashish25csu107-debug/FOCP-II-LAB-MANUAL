#include<iostream>
using namespace std;
class Academic{
    protected:
    int marks;
    float result;
    public:
   Academic(int m):marks(m){};

   void displaymarks(){
    cout << "\n Marks :" << marks;
   }
};
class Sports{
    protected:
    int score;
    public:
    Sports(int s):score(s){};
    void displayscore(){
     cout << "Score :" << score;
    }
};

class Result:public Academic,public Sports{
    public:
    Result(int m,int s):Academic(m),Sports(s){}
    void displayresult(){
        displaymarks();
        displayscore();
    }
    
};

int main(){
  Result r8(50,100);
  r8.displayresult();
  return 0;


}

