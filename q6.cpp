#include<iostream>
using namespace std;
int main(){
    int n;
    float bonus,netsalary,basic;
    cout<<"enter number of n";
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<"enter the basic salary";
    cin>>basic;
    bonus=0.12*basic;
    netsalary=bonus+basic;
    cout<<"bonus="<<bonus<<endl;
    cout<<"netsalary"<<netsalary<<endl;
    }
    return 0;

}