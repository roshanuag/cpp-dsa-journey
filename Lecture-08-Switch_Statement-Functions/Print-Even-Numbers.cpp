#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter an upper limit (N): ";
    cin >> n;

    cout << "Even numbers up to " << n << ": ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}