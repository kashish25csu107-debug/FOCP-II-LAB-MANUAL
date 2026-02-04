#include <iostream>
using namespace std;

int main() {
    char n;
    cout << "Enter a character: ";
    cin >> n;

    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
        n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') {
        cout << "Vowel";
    }
    else if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
        cout << "Consonant";
    }
    else if (n >= '0' && n <= '9') {
        cout << "Number";
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
