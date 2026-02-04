#include<iostream>
using namespace std;
int main(){
    int eventID;
    cout << "Enter eventID:" << endl;
    cin >> eventID;
    if(eventID /3){
        cout  <<"Buzz"  << endl;

    }
    else if(eventID/5){
        cout << "Fuzz" << endl;

    }
    else{
        cout <<"Buzz and Fuzz" << endl;
    }
    return 0;
}