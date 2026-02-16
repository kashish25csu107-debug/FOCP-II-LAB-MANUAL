//Read all student marks in an array &create a function to display max,min and avg
#include<iostream>
using namespace std;
void calculate(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];

        sum += arr[i];
    }

    double avg = (double)sum / n;

    cout << "\nMaximum Marks = " << max << endl;
    cout << "Minimum Marks = " << min << endl;
    cout << "Average Marks = " << avg << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];   // array declaration

    cout << "Enter marks:\n";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    calculate(marks, n);   // function call

    return 0;
}
