//matrix addition
#include<iostream>
using namespace std;

int main()
{

    int a[10][10],b[10][10],r,c,sum[10][10];

    cout<<"Enter no of row: ";
    cin>>r;
    cout<<"Enter no of columns: ";
    cin>>c;
    cout<<"Details of 1st matrix: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter no: ";
            cin>>a[i][j];
        }
    }

    cout<<"Details of 2nd matrix: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter no: ";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}