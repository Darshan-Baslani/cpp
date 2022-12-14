#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter any no: ";
    cin>>n;

    int x=1,y=1,z=1;
    for(int i=0; i<n; i++)
    {
        for(int j=2; j<n; j++)
        {
            if(i%j==0)
            {
                x=0;
                break;
            }
        }
        if(x==1)
        {
            for(int a=0; a<n; a++)
            {
                for(int b=2; b<n; b++)
                {
                    if(a%b==0)
                    {
                        y=0;
                        break;
                    }
                }
                if(y==1 && n==i+a){
                    cout<<i<<" "<<a;
                    z=0;
                }
                y=1;
            }
        }
        x=1;
    }
    if(z==1)
    {
        cout<<"not possible";
    }

    return 0;
}