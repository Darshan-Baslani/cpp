//armstrong no between 100 to 500
#include<iostream>
using namespace std;

int main()
{
    int armstrong,i=0,x,y,z;
    while(i<=500)
    {
        int sum=0;
        y = i;
        while(y!=0)
        {
            sum = sum + ((y%10)*(y%10)*(y%10));
            y = y/10;
        }
        if(sum == i)
        {
            cout<<sum<<"\n";
        }
        i++;
    }
    return 0;
}