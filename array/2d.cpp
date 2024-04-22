#include<iostream>
using namespace std;

int main()
{

    int r1,c1,r2,c2;
    cout<<"Enter row of first matrix: ";
    cin>>r1;
    cout<<"Enter column of first matrix: ";
    cin>>c1;
    lbl: cout<<"Enter row of second matrix: ";
        cin>>r2;
        cout<<"Enter column of second matrix: ";
        cin>>c2;

    if(c1!=r2)
        goto lbl;

    int a[r1][c1], b[c1][c2];

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<"Enter a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            
            cout<<"Enter b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
            
        }
    }

    int ans[r2][c2]={0};

    for(int i=0; i<c1; i++)
    {
        for(int j=0; j<r1; j++)
        {
            ans[i][j] = 0;
            for(int k=0; k<r1; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}