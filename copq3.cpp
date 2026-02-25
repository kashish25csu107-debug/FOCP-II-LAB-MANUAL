#include<iostream>
using namespace std;
class BankAccount{
    private:
	string accountHolderName;
   int accountNumber;
 	double balance;

    public:
void inputDetails();
void deposit(double amount);
void withdraw(double amount);
void displayDetails();


};
    void  BankAccount ::inputDetails(){
        cout << "Enter Name:" << accountHolderName << endl;
        cin >> accountHolderName;
        cout << "Enter account Number";
        cin >> accountNumber;
        cout <<"Enter balance";
        cin >> balance;
    }
    void BankAccount ::deposit(double amount){
        balance+= amount;
        cout << "Amount Deposited \n Balance= " << balance; 
    }
    void BankAccount ::withdraw(double amount){
        if(amount>balance){
            cout << "Insufficient Balance";
        }
        else{
            balance-=amount;
            cout << "Amount withdrawn \n  Balance " << balance;
        }
    }
    void BankAccount ::displayDetails(){
        cout  << "\nAccount Details\n";
        cout << "Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
    

int main(){
    BankAccount b;
    double amount;
    b.inputDetails();
    b.displayDetails();
     cout << "\nEnter amount to deposit: ";
    cin >> amount;
    b.deposit(amount);

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    b.withdraw(amount);

    return 0;
    

}


