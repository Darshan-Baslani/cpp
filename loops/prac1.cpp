#include<iostream>
using namespace std;

int main()
{

    char c = 'A';
    //upper triangle
    for(int i=0; i<9; i++)
    {
        int x = 0;
        //space printing
        for(int k=9-i; k>0; k--)
        {
            if(i%2==0)
                cout<<" ";
        }

        c = 'A';
        //char printing
        for(int j=0; j<=i; j++)
        {
            if(i%2==0)
            {
                cout<<c<<" ";
                c++;
                x=1;
            }
        }
        if(x==1)
            cout<<endl;
        x=0;     

                 
    }
    //lower triangle
     for(int i=0; i<9; i++)
     {
        //space printing
        for(int k=0; k<=i+2; k++)
        {   
            if(i%2==0)
                cout<<" ";
        }

        int x = 0;
        c = 'A';
        //char printing
        for(int j=7; j>i; j--)
        {
            if(i%2==0)
            {
                cout<<c<<" ";
                c++;
                x=1;
            }
        }
        if(x==1)
            cout<<endl;
        x=0;
     }

    return 0;
}