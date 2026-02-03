 #include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j;
    string s;
    cout<<"enter word";
    cin>>s;
    j=s.length()-1; 
    bool ispalindrome= true;
    for(i=0;i<j;i++,j--){
    if(s[i]!=s[j]){
        ispalindrome=false;
            break;}
        }
        if(ispalindrome)
                cout<<"palindrome";
            
            else
                cout<<"not palindrome";
        
return 0;
    }
