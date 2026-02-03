#include<iostream>
using namespace std;

int main() {
    int a, b;
    char oper;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
        case '+':
            cout << "Result = " << a + b << endl;
            break;

        case '-':
            cout << "Result = " << a - b << endl;
            break;

        case '*':
            cout << "Result = " << a * b << endl;
            break;

        case '/':
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Division by zero not allowed" << endl;
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}