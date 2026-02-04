#include<iostream>
using namespace std;
int main(){
    int n ;
    double num,maxValue;
    cout <<"Enter no of sales entries";
    cin >> n;
    if(n<=0){
        cout << "Invalid Entries";

    }
    
     cout << "Enter sales figure1";
     cin >> maxValue;
    for(int i=2; i<=n ;i++){

     cout << "Enter sales figure" << i << ":" << endl;
     cin >> num;
     if (num > maxValue) {
            maxValue = num;
        }
    }

    cout << "Maximum sales figure = " << maxValue << endl;

    return 0;
}
     
    

