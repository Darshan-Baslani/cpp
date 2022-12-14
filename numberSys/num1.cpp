#include<iostream>
using namespace std;
//101 = 1*2^2 + 1*2^1 + 1*2^0
int main()
{
    int bin;
    cout<<"Enter Binary: ";
    cin>>bin;
    int x,y=1,dec=0,tem=0;
    while(bin>0)
    {
        x = bin%10;
        dec += x*y;
        y*=2;
        bin /= 10;
    }
    cout<<dec<<endl;
    
    return 0;
}