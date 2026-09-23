#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float sub1, sub2, sub3, sub4;
    float total, percentage;

    cout << "Enter marks for 4 subjects (out of 100 each): ";
    cin >> sub1 >> sub2 >> sub3 >> sub4;

    // Check individual subject cutoffs (minimum 40 marks to pass)
    if (sub1 < 40.0f || sub2 < 40.0f || sub3 < 40.0f || sub4 < 40.0f) {
        cout << "\nResult: Failed (scored below 40 in one or more subjects)\n";
    } else {
        total = sub1 + sub2 + sub3 + sub4;
        percentage = (total / 400.0f) * 100.0f;

        cout << fixed << setprecision(2);
        cout << "\n--- Student Performance ---\n";
        cout << "Total Marks: " << total << " / 400.00\n";
        cout << "Percentage : " << percentage << "%\n";

        if (percentage >= 75.0f) {
            cout << "Division   : First Division with Distinction\n";
        } else if (percentage >= 60.0f) {
            cout << "Division   : First Division\n";
        } else if (percentage >= 50.0f) {
            cout << "Division   : Second Division\n";
        } else {
            cout << "Division   : Third Division\n";
        }
    }

    return 0;
}