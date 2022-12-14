#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Decimal no: ";
    cin>>n;
    int rem,bin;
    while(n>0)
    {
       rem = n%2; 
       bin = bin*10 + rem;
       n /= 2;
    }
    int rev,final=0;
    while(bin>0)
    {
        rev = bin%10;
        final = final*10 + rev;
        bin /= 10;
    }
    cout<<final<<endl;
    return 0;
}