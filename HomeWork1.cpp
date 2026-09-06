#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch>='0' && ch <='9'){
        cout << "It is a number" << endl;
    }
    else if (ch>='a' && ch<='z'){
        cout << "Its is a lowercase" << endl;
    }
    else if (ch>='A' && ch<='Z'){
        cout << "It is a uppercase" << endl;
    }
    else {
        cout << "Enter a valid character" << endl;
    }
    
    return 0;
}