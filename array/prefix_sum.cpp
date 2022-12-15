#include<iostream>
#include<vector>
using namespace std;

int prefix_sum_in_matrix(vector<vector<int>> v, int l1, int l2, int r1, int r2){
    int ans=0;
    for(int row = l1; row<=l2; row++)
    {
        for(int col = r1; col<= r2; col++)
        {
            ans += v[row][col];
        }
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
        }
    }

    int l1,l2,r1,r2;
    cout<<"Enter l1: "; cin>>l1;
    cout<<"Enter l2: "; cin>>l2;
    cout<<"Enter r1: "; cin>>r1;
    cout<<"Enter r2: "; cin>>r2;

    cout<<"Sum of Prefix = "<<prefix_sum_in_matrix(v,l1,l2,r1,r2);

    return 0;
}