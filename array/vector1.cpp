#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> v;
    int n;
    cout<<"Enter no of elements you want to enter: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter element: ";
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i=0; i<v.size();i++)
    {
        cout<<"\nYou entered: "<<v[i];
    }

    return 0;
}