#include<iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers are: ";

    for(int num = start; num <= end; num++) {
        if(num <= 1)
            continue;

        int flag = 1;

        for(int i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout << num << " ";
    }

    return 0;
}