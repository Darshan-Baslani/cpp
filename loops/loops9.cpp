//reverse entered no
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    int rev,temp;
    while(n>0)
    {
        temp = n%10;
        n = n/10;
        rev = rev*10 + temp;
    }
    cout<<"Reverse no = "<< rev << endl;
    return 0;
}