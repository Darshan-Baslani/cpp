#include<iostream>
using namespace std;
float pi = 3.14;
int circle(int radius)
{
    int area = pi*(radius*radius);
    int circum = 2*pi*radius;
    return area,circum;
}


int main()
{
    int r;
    cin>>r;
    cout<<circle(r);


    return 0;
}