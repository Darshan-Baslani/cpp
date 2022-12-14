#include<iostream>
using namespace std;

int main()
{

    int x,a[]={1,2,3,4,5,6,7};
    cout<<"Enter x: ";
    cin>>x;
    bool condition = false;
    int size = sizeof(a) / sizeof(a[0]);
    for(int i=0; i<size; i++)
    {

        for(int j=0; j<size; j++)
        {
            for(int k=0; k<size; k++)
            {
            if(a[i]+a[j]+a[k]==x)
            {
                condition = true;
            }
            if(condition == true)
            {
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
            }
            condition = false;
            }
        }

    }

    return 0;
}