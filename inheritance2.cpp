#include<iostream>
using namespace std;
class Account{
    protected:
    string Accountno;
    double balance;

    public:
    Account(){
        cout << "Default Constructor:";
        Accountno ="NA"; balance=0;
    }

    Account(string accno,float bal){
        cout << "\n Parameterized account";
        Accountno =accno;
        balance=bal;
    }

 void displayAccount(){
        cout  << "\nAccount Details\n";
        cout << "Account Number: " << Accountno << endl;
        cout << "Balance: " << balance << endl;
    }
};
    class savingsAccount:public Account{
        float intrate;
        public:
        savingsAccount(){
            cout << "\n Default SA";
            int rate =1;

        }
        savingsAccount(string ano,float bal, float ir):Account(ano,bal){
            cout << "\n Parameterized SA";
            int rate=ir;
        }
        void calaculateIntrest(){
            cout << "\n Your Account details";
            displayAccount();
            cout << "\n Balance post Intrest rate:" << (balance*intrate)/100;
        }
    };
    int main(){
        savingsAccount sa1,sa2("ikshyhjs677",100000,6.7);
        sa1.calaculateIntrest();
        sa2.calaculateIntrest();
        return 0;
    }

