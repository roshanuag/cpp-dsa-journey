#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter a single character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        char lower = ch + 32;
        cout << "Uppercase letter detected. Lowercase version: " << lower << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        char upper = ch - 32;
        cout << "Lowercase letter detected. Uppercase version: " << upper << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "Digit detected: " << ch << " (ASCII: " << (int)ch << ")" << endl;
    } else {
        cout << "Special symbol or punctuation: " << ch << " (ASCII: " << (int)ch << ")" << endl;
    }

    return 0;
}