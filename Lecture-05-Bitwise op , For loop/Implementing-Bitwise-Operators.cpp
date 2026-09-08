/*In this code we will do the implementation of Bitwise opeators like Botwise AND (&),
Bitwise OR (|), Bitwise NOT(~), Bitwise XOR(^). Also left shift and right shift.

*/

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << ~a << endl;
    cout << " a^b " << (a ^ b) << endl;

    cout << (17 >> 1) << endl; // Right shift
    cout << (21 << 2) << endl; // Left shift
}