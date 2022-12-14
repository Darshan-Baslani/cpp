#include<iostream>
using namespace std;

int main()
{

    int row,col;
    cin>>row>>col;

    int a[row][col],max=-10000;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
            if(a[i][j]>max)
                max = a[i][j];
        }
    }
    
    cout<<"\nMaximum = "<<max;

    return 0;
}