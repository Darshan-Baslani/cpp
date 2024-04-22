#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    int v[n][n] = {0};
    for(int i=0; i<n; i++)
    {
        int j=0;
        cout<<"1 ";
        v[i][j] = 1;
        if(i == 1)
        {
            v[i][j+1] = 1;
            cout<<"1 ";
        }
        for(j=0; j<i; j++)
        {
            if(v[i][j]!=1)
            {
                v[i][j] =  v[i-1][j] + v[i-1][j-1];
                cout<<v[i][j]<<" ";
            }
        }
        if(i>1)
        {
            cout<<"1 ";
            v[i][j] = 1;
        }
        cout<<endl;
    }

    return 0;
}