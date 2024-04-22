//given a positive integer n, create a n*n matrix filled with elemts from 1 to n^2 in spiral order.
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> convert_to_spiral(int n)
{
        int target = n*n;
        int position = 0;
        int top = 0;
        int left = 0;
        int bottom = n-1;
        int right = n-1;
        int val=1;
        vector<vector<int>> ans(n, vector<int> (n,-1));

        while(left<= right && top<= bottom)
        {              
             //left to right
            if(position==0)
            {
                for(int col=left; col<=right; col++)
                {
                    ans[top][col] = val++;
                }
                top++;
            }
            //top to bottom
            else if(position==1)
            {
                for(int row=top; row<=bottom; row++)
                {
                    ans[row][right] = val++;
                }
                right--;
            }
            //right to left
            else if(position ==2)
            {
                for(int col=right; col>=left; col--)
                {
                    ans[bottom][col] = val++;
                }
                bottom--;
            }
            //bottom to top
            else
            {
                for(int row=bottom; row>=top; row--)
                {
                    ans[row][left] = val++;
                }
                left++;
            }
            position = (position+1) %4;
        }
        return ans;
}

int main()
{
    int n;
    cin>>n;
    int temp=1;
    vector<vector<int>> ans(n, vector<int> (n));
    ans = convert_to_spiral(n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}