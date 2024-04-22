/*
- Given a decimal number as input, we need to write a program to convert the given decimal
number into its equivalent binary number.
Input1 : 7
Output1 : 111
Input2 : 10
Output2 : 1010
*/
#include<iostream>
using namespace std;

void bin(int n) {
    if(n<=1){
        cout<<n%2;
        return;
    }
    
    bin(n/2);
    cout<<n%2;
}

int main() {
    
    int n;
    cout<<"Enter any no: "; cin>>n;

    bin(n);

    return 0;
}