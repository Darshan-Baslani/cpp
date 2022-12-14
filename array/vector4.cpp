#include<iostream>
#include<vector>
using namespace std;
//input = 1,2,3,4,5,6 output = 1,3,5,2,4,6

void even_odd_diff(vector<int> &v)
{
    int left_ptr = 0, right_ptr = v.size()-1;
    while(left_ptr<right_ptr)
    {
        int temp=0;
        if(v[left_ptr]%2==0 && v[right_ptr]%2==1)
        {
            temp = v[right_ptr];
            v[right_ptr] = v[left_ptr];
            v[left_ptr] = temp;
            v[left_ptr++];
            v[right_ptr--];
        }
        if(v[left_ptr]%2==1)
            v[left_ptr++];
        if(v[right_ptr]%2==0)
            v[right_ptr--];
    }

}

int main()
{

    vector<int> v;
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int ele;
        cout<<"Enter "<<i<<" element";
        cin>>ele;
        v.push_back(ele);
    }

    even_odd_diff(v);

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}