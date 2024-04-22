#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the no: ";
    cin>>n;
    int fact = 1;
    for(i=1;i<=n;i++)
    {
        fact *= i;
        cout<<"Factorial = "<<fact<<endl;
    }
    return 0;
}