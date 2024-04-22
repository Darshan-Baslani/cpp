#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascal_triangle(int n)
{
    vector<vector<int>> ans;
    for(int i=0; i<n; i++)
    {
        ans.resize(i+1);
        ans[i].resize(i+1);
        for(int j=0; j<=i; j++)
        {
            if(j==0 || j==i)
            {
                ans[i][j] = 1;
            }
            else
            {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
    }
    return ans;

}

int main()
{

    int n;
    cout<<"Enter no of rows:";
    cin>>n;

    vector<vector<int>> ans;
    ans = pascal_triangle(n);

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}