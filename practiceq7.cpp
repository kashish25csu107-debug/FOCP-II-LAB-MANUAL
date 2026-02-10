#include<iostream>
using namespace std;
void welcome(void);
void welcome(string name);
int main(){
    welcome();
    welcome("section C");
    return 0;
}
void welcome()
{
    cout<<"\nwelcome agent";
}
void welcome (string name)
{
    cout<<"\n welcome"<<name;
}