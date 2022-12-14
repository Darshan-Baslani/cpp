#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter no of elements you want to enter: ";
    cin>>n;

    int a[n],max,secondMax;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }

    max = a[0];
    secondMax = -31000;
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
            max = a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]<max && a[i]>secondMax)
            secondMax = a[i];
    }

    cout<<secondMax;

    return 0;
}