#include<iostream>
#include<vector>
using namespace std;

int prefix_sum(vector<vector<int>> &v, int l1, int l2, int r1, int r2)
{
    //column wise addition
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[0].size(); j++)
        {
            if(j>0) v[i][j] += v[i][j-1];
        }
    }

    //overall addition
    for(int i=0; i<v[0].size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            if(j>0) v[j][i] += v[j-1][i];
        }
    }

    int ans = v[l2][r2];
    if (l1 != 0) ans -= v[l1-1][r2];
    if (r1 != 0) ans -= v[l2][r1-1];
    if (l1 != 0 && r1 != 0) ans += v[l1-1][r1-1];
    return ans;

}

int main()
{

    int m,n;
    cin>>m>>n;
    vector<vector<int>> v(m, vector<int> (n));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
        }
    }

    int l1,r1,l2,r2;
    cout<<"Enter l1: "; cin>>l1;
    cout<<"Enter l2: "; cin>>l2;
    cout<<"Enter r1: "; cin>>r1;
    cout<<"Enter r2: "; cin>>r2;

    cout<<prefix_sum(v,l1,l2,r1,r2);

    return 0;
}