#include <iostream>
using namespace std;

void countNotes(int amount) {
    int count = 0;

    switch (1) {
        case 1:
            count = amount / 100;
            amount %= 100;
            cout << "Rs 100 notes: " << count << endl;
        case 2:
            count = amount / 50;
            amount %= 50;
            cout << "Rs 50 notes:  " << count << endl;
        case 3:
            count = amount / 20;
            amount %= 20;
            cout << "Rs 20 notes:  " << count << endl;
        case 4:
            count = amount / 1;
            amount %= 1;
            cout << "Rs 1 notes:   " << count << endl;
            break;
    }
}

int main() {
    int totalAmount = 1330;
    cout << "Total Amount: " << totalAmount << endl;
    countNotes(totalAmount);
    return 0;
}