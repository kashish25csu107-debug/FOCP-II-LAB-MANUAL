#include<iostream>
using namespace std;
int main(){
    int itemno ,quantity;
    float unitprice ,discount  ,totalprice ,finalamount;
    cout <<"Enter quantity :";
    cin >> quantity;
    cout << "Enter itemno";
    cin >> itemno;
    cout << "Enter unitprice";
    cin >> unitprice;
    totalprice=quantity*unitprice;
    discount=totalprice*0.20;
    finalamount=totalprice-discount;
    cout << "Item no :" << itemno << endl;
    cout << "Total Price: Rs. " << totalprice << endl;
    cout << "Discount (20%): Rs. " << discount << endl;
    cout << " Total Bill Amount is:" << finalamount << endl;
    return 0;
}