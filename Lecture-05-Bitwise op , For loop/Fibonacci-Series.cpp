#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0;
    int b = 1;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    cout << endl;
    return 0;
}