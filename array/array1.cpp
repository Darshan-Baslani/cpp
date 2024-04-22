#include<iostream>
using namespace std;

int main()
{
    
    int a[]={1,6,5,7,10,8,9},mid;
    
    int size = sizeof(a) / sizeof(a[0]);
    int x=0;
    int y=0;
    for(int i=1; i<size; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(a[i]>=a[j])
            {
                x=0;
            }
            else
            {
                x=1;
                break;
            }
        }
        
        for(int j=i; j<size; j++)
        {
            if(a[i]<=a[j])
            {
                y=0;
            }
            else
            {
                y=1;
                break;
            }
        }
        
        if(x==0 && y==0)
        {
            cout<<a[i]<<endl;
            break;
        }
        
    }
    
    return 0;
}