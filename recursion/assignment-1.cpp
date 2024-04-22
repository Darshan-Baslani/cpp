//Given a number n, print the following pattern without using any loop.
//Sample Input: n = 16
//Sample Output: 16, 11, 6, 1, -4, 1, 6, 11, 16

#include<iostream>
using namespace std;

void f(int n) {
    if(n<=0) {
        cout<<" "<<n;
        return;
    }
    cout<<" "<<n;
    f(n-5);
    cout<<" "<<n;
}

int main() {

    int n;
    bool ind=false;
    cout<<"Enter any no: ";
    cin>>n;

    f(n);

    return 0;
}