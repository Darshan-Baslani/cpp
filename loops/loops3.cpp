#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the no:";
    cin>>n;
    int rev = 0;
    while(n>0)
    {
        i = n%10;
        rev = rev * 10 + i;
        n = n/10;
    }
    cout<<"Reversed no: "<<rev<<endl;
    return 0;
}