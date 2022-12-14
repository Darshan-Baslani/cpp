#include<iostream>
using namespace std;

int main()
{

    int a[]={1,2,3,3,4,2,1};

    int size = sizeof(a) / sizeof(a[0]);
    int x=1;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                x=1;
                break;
            }
            else    
                x=2;
        }
        if(x==2)
            cout<<a[i]<<endl;
    }

    return 0;
}