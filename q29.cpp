#include <iostream>
using namespace std;

int main() {
    float temp[30];
    float min;

    cout << "Enter temperatures for 30 days:\n";

    // Input temperatures
    for(int i = 0; i < 30; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> temp[i];
    }

    // Assume first temperature is minimum
    min = temp[0];

    // Find minimum temperature
    for(int i = 1; i < 30; i++) {
        if(temp[i] < min) {
            min = temp[i];
        }
    }

    // Display result
    cout << "\nMinimum Temperature = " << min << endl;

    return 0;
}