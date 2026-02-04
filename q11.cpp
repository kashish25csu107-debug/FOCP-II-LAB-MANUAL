#include<iostream>
using namespace std;
int main(){
    int quantity;
    float price ,discount =0  ,totalamount ,finalamount;
    cout <<"Enter quantity :";
    cin >> quantity;
    cout << "Enter price per item";
    cin >> price;
    totalamount=quantity*price;
      if(quantity >1000){
    discount=totalamount*0.10;
      }
    finalamount=totalamount-discount;
    cout << "\nTotal Amount: " << totalamount << endl;
    cout << "Discount Applied: " << discount << endl;
    cout << "Final Payable Amount: " << finalamount << endl;
    return 0;

    }

