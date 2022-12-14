#include <iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 4; j <=1; j-- )
        {
            cout<<"_";
        }
        for(int k = 1; k <= 4; k++)
        {
            cout<<k;
        }
        for(int l = 0; l <= 3; l++)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}