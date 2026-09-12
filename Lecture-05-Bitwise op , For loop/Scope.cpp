#include <iostream>
using namespace std;

int main(){
    int a=3; //global
    cout << a << endl;

    if(true){
        int a =5;//local
        cout<<a<<endl;
    }

    
}
