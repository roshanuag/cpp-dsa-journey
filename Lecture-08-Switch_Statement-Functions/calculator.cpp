#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the numbers:";
    cin>>a>>b;

    char op;
    cout<<"Enter the operator(+,-,/,*)";
    cin>>op;

    switch(op){
        case '+': cout<<a<<" + "<<b<<" = "<<a+b<<endl; break;
        case '-': cout<<a<<" - "<<b<<" = "<<a-b<<endl; break;
        case '/': cout<<a<<" / "<<b<<" = "<<a/b<<endl; break;
        case '*': cout<<a<<" x "<<b<<" = "<<a*b<<endl; break;

        default: cout<<"Enter a valid operator!!"<<endl;
        
    }
return 0;
}