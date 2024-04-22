#include<iostream>
using namespace std;

void prime_identifier(int &i)
{
    int x=1;
    for(int j=2; j<i; j++)
    {
        if(i%j == 0)
        {
            x=0;
            break;
        }
    }
    if(x==1)
        cout<<i<<" ";
    return;
}

int main()
{
    int a,b;
    cout<<"Enter A: "; cin>>a;
    cout<<"Enter B: "; cin>>b;

    for(int i=a; i<=b; i++)
    {
        prime_identifier(i);
    }
    return 0;
}