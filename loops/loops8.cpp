//program to find sum of n natural no
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    cout<<"Answer = "<<sum<<endl;
    return 0;
}