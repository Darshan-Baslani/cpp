#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    int sum=a;
    for(int i=1; i<b; i++)
    {
        sum *= a;
    }
    cout<<sum<<endl;
    return 0;
}