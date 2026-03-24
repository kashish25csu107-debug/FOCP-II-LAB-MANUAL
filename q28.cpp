#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int evenSum = 0, oddSum = 0;

    cout << "Enter 5 elements:\n";

    // Input elements
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calculate sum of even and odd numbers
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    // Display results
    cout << "\nSum of Even Numbers = " << evenSum << endl;
    cout << "Sum of Odd Numbers = " << oddSum << endl;

    return 0;
}