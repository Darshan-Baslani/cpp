#include<iostream>
using namespace std;

int main()
{

    int n1,n2;
    cout<<"Enter 1st binary: ";
    cin>>n1;
    cout<<"Enter 2nd binary: ";
    cin>>n2;
    int pw=1;
    int x,y=0,z,a=0;
    while(n1>0)
    {
        x = n1%10;
        y = y + (x*pw);
        n1 /= 10;
        pw *= 2;
    }
    pw = 1;
    while(n2>0)
    {
        z = n2%10;
        a = a + (z*pw);
        n2 /= 10;
        pw *= 2;
    }
    cout<<y<<endl;
    cout<<a<<endl;


    return 0;
}