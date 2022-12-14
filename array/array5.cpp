#include<iostream>
using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    k = k%n;
    for(int i=n-k;i<n;i++)
    {
        cout<<arr[i];
    }

    for(int i=0;i<n-k;i++)
    {
        cout<<arr[i];
    }

    return 0;
}