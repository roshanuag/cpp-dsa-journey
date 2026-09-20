#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float theory, practical, assignment, attendance;
    float weighted_total;

    // Input marks
    cout << "Enter Theory exam marks (out of 100): ";
    cin >> theory;

    cout << "Enter Lab practical marks (out of 100): ";
    cin >> practical;

    cout << "Enter Assignment score (out of 100): ";
    cin >> assignment;

    cout << "Enter Attendance percentage (out of 100): ";
    cin >> attendance;

    // Validation check
    if (theory < 0 || theory > 100 || practical < 0 || practical > 100 ||
        assignment < 0 || assignment > 100 || attendance < 0 || attendance > 100) {
        cout << "Error: All marks and attendance must be between 0 and 100." << endl;
        return 1;
    }

    // Calculations: Theory 40%, Practical 30%, Assignment 20%, Attendance 10%
    weighted_total = (theory * 0.40f) + (practical * 0.30f) + 
                     (assignment * 0.20f) + (attendance * 0.10f);

    cout << fixed << setprecision(2);
    cout << "\n--- Final Academic Evaluation ---\n";
    cout << "Overall Weighted Score: " << weighted_total << "%\n";

    // Grading ladder
    if (weighted_total >= 90.0f) {
        cout << "Grade: O  (Outstanding)\n";
    } else if (weighted_total >= 80.0f) {
        cout << "Grade: A+ (Excellent)\n";
    } else if (weighted_total >= 70.0f) {
        cout << "Grade: A  (Very Good)\n";
    } else if (weighted_total >= 60.0f) {
        cout << "Grade: B+ (Good)\n";
    } else if (weighted_total >= 50.0f) {
        cout << "Grade: B  (Above Average)\n";
    } else if (weighted_total >= 40.0f) {
        cout << "Grade: P  (Pass)\n";
    } else {
        cout << "Grade: F  (Fail / Re-appear)\n";
    }

    return 0;
}