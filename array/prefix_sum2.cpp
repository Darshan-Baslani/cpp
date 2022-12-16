#include<iostream>
#include<vector>
using namespace std;

int sum_prefix(vector<vector<int>> v,int l1,int r1,int l2,int r2){
    int ans=0;
    for(int i=l1; i<=l2; i++)
    {
        ans += v[i][r2] - (r1>0 ? v[i][r1-1] : 0);
    }
     
    return ans;

}

int main()
{

    int m,n;
    cin>>m>>n;

    vector<vector<int>> v (m, vector<int> (n));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
            // converting each row of vector into prefix sum vector
            if(j>0)
                v[i][j] += v[i][j-1];
        }
        
    }

    int l1,r1,l2,r2;
    cout<<"Enter l1: "; cin>>l1;
    cout<<"Enter l2: "; cin>>l2;
    cout<<"Enter r1: "; cin>>r1;
    cout<<"Enter r2: "; cin>>r2;

    cout<<"Sum = "<<sum_prefix(v,l1,r1,l2,r2);

    return 0;
}