#include<iostream>
using namespace std;

int main()
{

    int r,c;
    cout<<"Enter no of rows: ";
    cin>>r;
    cout<<"Enter no of columns: ";
    cin>>c;

    //loop for row
    for(int i=0; i<r; i++)
    {
        //loop for columns
        for(int j=0; j<c; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}