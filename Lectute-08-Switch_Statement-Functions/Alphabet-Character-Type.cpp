#include <iostream>


using namespace std;

int main() {
    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if (isalpha(ch)) {
        char lower_ch = tolower(ch);
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
            lower_ch == 'o' || lower_ch == 'u') {
            cout << "'" << ch << "' is a Vowel." << endl;
        } else {
            cout << "'" << ch << "' is a Consonant." << endl;
        }
    } else {
        cout << "'" << ch << "' is not an alphabetic letter." << endl;
    }

    return 0;
}