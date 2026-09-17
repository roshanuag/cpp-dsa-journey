#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return (b != 0) ? (a / b) : 0; }

// Switch statement inside a driver function
void executeOperation(int a, int b, char op) {
    switch (op) {
        case '+':
            cout << "Result: " << add(a, b) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << divide(a, b) << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }
}

int main() {
    int x = 20, y = 5;

    executeOperation(x, y, '+');
    executeOperation(x, y, '-');
    executeOperation(x, y, '*');
    executeOperation(x, y, '/');

    return 0;
}