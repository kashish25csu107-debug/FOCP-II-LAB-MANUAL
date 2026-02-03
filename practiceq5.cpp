#include<iostream>
using namespace std;
int main()
{
    int number,reversedNumber =0 ,remainder;
    cout << "Enter a number";
    cin>> number;
    int originalNumber = number;
    while(number>0){
    remainder = number%10;
    reversedNumber =reversedNumber*10+remainder;
    number/=10;

}
if(number == reversedNumber){
    cout << "Palindrome number";
}
cout << "The palidrome of "<< originalNumber <<"is "<< reversedNumber <<endl;
return 0;
}