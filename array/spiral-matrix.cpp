#include<iostream>
#include<vector>

using namespace std;

void spiral(vector<vector<int>> v)
{
    int top=0;
    int left = 0;
    int bottom = v.size()-1;
    int right = v[0].size()-1;
    int direction=0;

    while(top<=bottom && left<=right)
    {
        //left -> right
        if(direction==0)
        {
            for(int col=left; col<=right; col++)
            {
                cout<<v[top][col]<<" ";
            }
            top++;
        }
        //top -> bottom
        else if(direction==1)
        {
            for(int row=top; row<=bottom; row++)
            {
                cout<<v[row][right]<<" ";
            }
            right--;
        }
        //right -> left
        else if(direction==2)
        {
            for(int col=right; col>=left; col--)
            {
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }
        // bottom -> top
        else
        {
            for(int row=bottom; row>=top; row--)
            {
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1) % 4;
    }

}

int main()
{

    int m,n;
    cin>>m>>n;

    vector<vector<int>> v (m,vector<int> (n));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
        }
    }

    spiral(v);

    return 0;
}