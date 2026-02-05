#include<iostream>
using namespace std;
int main(){
    int no ,count=0;
    cout << "Enter no";
    cin >> no;
    if(no<=1){
        cout << "Not aPrime Number";
    }
    for(int i =2; i <no ;i++){
        if(no%i ==0){
        count ++;
        break;
    }
}
    
    if(count == 0){
        cout <<"Prime Number";

    }
    else{
        cout << "Not a Prime Number";
    }
    return 0;
}