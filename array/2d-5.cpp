#include<iostream>
using namespace std;

int main()
{

    int r,c;
    cin>>r>>c;

    int a[r][c];

    int flag[10][10]={0};
    cout<<"Input details: "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
            {
                flag[i][j] = 1;
            }
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(flag[i][j] == 1)
            {
                for(int row=0; row<r; row++)
                {
                    a[row][j] = 0;
                }
                for(int col=0; col<c; col++)
                {
                    a[i][col] = 0;
                }
            }
        }
    }

    cout<<"\nOutput:\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}