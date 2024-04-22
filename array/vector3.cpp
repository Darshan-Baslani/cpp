#include<iostream>
#include<vector>
using namespace std;

void binarySorting(vector<int> &v)
{
    //1101 1010
    // l = 0  r = 7
    int left_vtr = 0, right_vtr = v.size() - 1;

    while(left_vtr < right_vtr)
    {
        if(v[left_vtr] == 1 && v[right_vtr] == 0)
        {
            v[left_vtr++] = 0;
            v[right_vtr--] = 1;
        }
        if(v[left_vtr] == 0)
            left_vtr++;
        if(v[right_vtr] == 1)
            right_vtr--;
    }

}

int main()
{

    int n;
    vector<int> v;
    cout<<"Enter no of elements: ";
    cin>>n;
    int ele;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>ele;
        v.push_back(ele);
    }

    binarySorting(v);

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}