#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the no: ";
    cin>>n;
    int sum = 0;
    while(n>0)
    {
        i = n%10;
        sum = sum + i;
        n = n/10;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}