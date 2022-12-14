#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter "<<i<<" element:";
        cin>>v[i];
        v[i]+=v[i-1];
    }
    int q;
    cout<<"Enter queries: ";
    cin>>q;

    while(q--)
    {
        int l,r;
        cout<<"Enter l: ";
        cin>>l;
        cout<<"Enter r: ";
        cin>>r;
        int ans = 0;
        ans = v[r] - v[l-1];
        cout<<"Answer: "<<ans<<endl;
    }

    return 0;
}