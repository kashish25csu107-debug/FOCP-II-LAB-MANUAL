#include <iostream>
using namespace std;

int main() {
    float price[10];
    float max;

    cout << "Enter prices of 10 items:\n";

    // Input prices
    for(int i = 0; i < 10; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> price[i];
    }

    // Assume first element is maximum
    max = price[0];

    // Find maximum price
    for(int i = 1; i < 10; i++) {
        if(price[i] > max) {
            max = price[i];
        }
    }

    // Display result
    cout << "\nMaximum Price = " << max << endl;

    return 0;
}