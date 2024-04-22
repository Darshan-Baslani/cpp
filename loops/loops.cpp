#include<iostream>
using namespace std;

int main()
{
    int y=0,n;
    cout << "Please enter the no: ";
    cin >> n;
    while(n>0)
    {
        y++;
        n = n / 10;       
    }
    cout << "The no of digits in the entered no = " << y << endl;
    return 0;
}