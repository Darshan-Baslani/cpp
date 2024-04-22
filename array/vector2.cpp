#include<iostream>
#include<vector>
using namespace std;

void sortOfElements(vector<int> v)
{
    int size;
    int temp;
    size = v.size();
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if(v[j]<=v[i])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{

    int n;
    cout<<"Enter no of elements: ";
    cin>>n;

    vector<int> vec;
    int ele;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i<<" element: ";
        cin>>ele;
        vec.push_back(ele);
    }

    sortOfElements(vec);

    

    return 0;
}