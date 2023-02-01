#include<iostream>
using namespace std;

int sum_of_n(int n) {
    int result=0;
    if(n>=0 and n<=9)
        return n;

    result += n%10;
    return result + sum_of_n(n/10);
}

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Sum of its numbers = "<<sum_of_n(n);

    return 0;
}