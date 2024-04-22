#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> v;
    int n,ans = 0;
    cout<<"Enter no of elements you want to enter: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int ele;
        cout<<"Enter "<<i<<" element: ";
        cin>>ele;
        v.push_back(ele);
    }

    for(int i=0; i<n; i++)
    {
        ans += v[i];
        v[i] = ans;
        cout<<v[i]<<" ";
    }

    return 0;
}