#include<iostream>
using namespace std;

int main()
{

    int bin[100],n,temp=0;

    cout<<"Enter no of elements you want to enter: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i<<" element: ";
        cin>>bin[i];
    }
    int min = bin[0];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(bin[i]>=bin[j])
            {
                temp = bin[i];
                bin[i] = bin[j];
                bin[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<bin[i]<<" ";
    }

    return 0;
}