#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    if(a>b) return gcd(b,a-b);
    return gcd(a,b-a);
}

int main() {

    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"GCD = "<<gcd(a,b);

    return 0;
}