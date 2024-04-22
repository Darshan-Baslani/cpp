#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int x=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            x = 1;
            break;
        }
    }
    if(x==0)
        cout<<"Its a prime no.";
    else
        cout<<"Its not a prime no.";
    return 0;
}