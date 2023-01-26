#include<iostream>
using namespace std;

int fibo(int n) {
    if(n==1 or n==0)
        return n;

    return fibo(n-1)+fibo(n-2);
}

int main() {

    int n;

    cout<<"Enter n: ";
    cin>>n;
    cout<<"Fibbonacci = "<<fibo(n);

    return 0;
}