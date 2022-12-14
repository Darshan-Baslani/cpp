#include<iostream>
using namespace std;

void odd_identifier(int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int a,b;
    cout<<"Enter a: ";cin>>a;
    cout<<"Enter b: ";cin>>b;

    odd_identifier(a,b);

    return 0;
}