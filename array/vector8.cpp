#include<iostream>
#include<vector>
using namespace std;

bool sum_of_prefix(vector<int> v,int n)
{
    int sumP = 0, sumS = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(i==n)
        {
            for(int j=i; j>=0; j--)
            {
                sumP += v[j];
            }
        }
        if(i>n)
        {
            sumS += v[i];
        }
    }
    if(sumP == sumS)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    vector<int>v;
    int n;
    cout<<"Enter elements: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int ele;
        cout<<"Enter "<<i<< " element: ";
        cin>>ele;
        v.push_back(ele);
    }
    int prefix;
    cout<<"Enter Position of Prefix: ";
    cin>>prefix;

    if(sum_of_prefix(v,prefix) == true)
    {
        cout<<"Sum of both the sides are equal.";
    }
    else
    {
        cout<<"Sum of both the sides are not equal.";
    }

    return 0;
}