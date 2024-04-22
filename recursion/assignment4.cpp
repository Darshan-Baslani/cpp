/*
Q2 - Given a number n, check whether it's a prime number or not using recursion.
Input1 : n = 11
Output1 : Yes
Input2 : n = 15
Output2 : No
*/
#include<iostream>
using namespace std;

bool isprime(int x, int i) {
    if(i==x) {
        return true;
    }
    if(x%i == 0){
        return false;
    }
    
    return isprime(x,i+1);

}

int main() {

   int x;
   cout<<"Enter any value: "; cin>>x;

   if(isprime(x,2)){
    cout<<x<<" is prime";
   }else{
    cout<<x<<" is not prime";
   }

    return 0;
}