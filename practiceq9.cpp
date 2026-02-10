#include<iostream>
using namespace std;
int Result(int ,int );
int Result(int ,int,int);
int Result(int ,int,int,int);
int Result(int ,int,int ,int ,int);
int main(){
   cout << "\n Result of 2 subjects" << Result(45,58);
   cout << "\n Result of 3 subjects" << Result(57,68,95);
   cout << "\n Result of 4 subjects" << Result(78,49,65,77);
   cout << "\n Result of 5 subjects" << Result(47,69,84,56,75);
   return 0;
   }

   int Result(int n1, int n2){
cout << "\nInt method";
return n1+n2;
    }
      int Result(int n1, int n2,int n3){
cout << "\nInt method";
return n1+n2+n3;
    }

      int Result(int n1, int n2 ,int n3 ,int n4){
cout << "\nInt method";
return n1+n2+n3+n4;
    }

      int Result(int n1, int n2 ,int n3,int n4 , int n5){
cout << "\nInt method";
return n1+n2+n3+n4+n5;
    }