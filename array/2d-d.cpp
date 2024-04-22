#include<iostream>
using namespace std;

int main()
{

    int row,col;

    cin>>row>>col;

    int a[row][col];
    cout<<"Enter details:"<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\nTransposed matrix:\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}