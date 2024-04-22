#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    if(a>b) return gcd(b,a);
    return gcd(a,b%a);
}

int main() {

    cout<<gcd(12,24);

    return 0;
}