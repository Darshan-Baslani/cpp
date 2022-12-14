#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
//input = -10, -5, 2, 4, 7 output = 4,16,25,49,100

void square_arrange(vector<int> &v)
{
    int temp=0;
    for(int i=0; i<v.size(); i++)
    {
        abs(v[i]);
        v[i] = v[i]*v[i];
    }
    for(int i=0; i<v.size();i++)
    {
        for(int j=i;j<v.size();j++)
            {
                if(v[j]<v[i])
                {
                    temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
            }
    }
}

int main()
{

    vector<int> v;
    int n;
    cout<<"Enter no of elements you want to enter: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int ele;
        cout<<"Enter "<<i<<" element: ";
        cin>>ele;
        v.push_back(ele);
    }

    square_arrange(v);

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}