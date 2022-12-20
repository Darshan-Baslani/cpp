#include<iostream>
#include<vector>
using namespace std;
//arr 1 = 1,6,7,10
//arr 2 = 0,1,3,8,11
vector<int> merge_sort(vector<int> &arr1, vector<int> &arr2)
{
    int i=0,j=0,temp=(arr1.size()+arr2.size());
    vector<int> ans;
    while((i+j)<temp)
    {
        if(arr1[i]<=arr2[j] && i!=arr1.size())
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr1{1,6,7,10};
    vector<int> arr2{0,1,3,8,11};
    vector<int> ans;
    ans = merge_sort(arr1,arr2);

    //printing the sorted array
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}