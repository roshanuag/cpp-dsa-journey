/*
 * Problem: Triangle Star Pattern
 * Source: CodeHelp Lecture 04
 * Logic: Outer loop handles rows (i), inner loop prints stars equal to row index (j <= i).
 * Time Complexity: O(n^2) | Space Complexity: O(1)
 */


#include <iostream>
using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int i = 1;
//     while (i<=n){

//         int j = 1;
//         while(j<=n){
//             cout << n-j+1 << " ";
//             j = j+1 ;
//         }
//         cout << endl;
//         i = i+1;

//     }
// }

int main(){
    cout << "Enter the number: ";
    int n;
    cin >>n;

    int i = 1;
    int count = 1;
    while(i<=n){
        int j=1;
        while(j<=n){

            cout<< count << " ";
            count = count +1;
            j = j+1; 
        }
        cout << endl;
        i = i+1;
    }



}   