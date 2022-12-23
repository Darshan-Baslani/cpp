//given a vector arr[] in increasing order. return an array of squares of each elements in the array in increasing order.
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr = {-5,-4,-3,-2,-1};
    vector<int> ans(arr.size());
    int i=0;

    int left=0, right=arr.size()-1;
    //{25,16,9,4,1}
    while(i<ans.size()) {
        if(arr[left]<=arr[right]){
            ans[i]=arr[right]*arr[right];
            right--;
        }else{
            ans[i]=arr[left]*arr[left];
            left++;
        }
        i++;
    }
    i=0;
    while(i<ans.size()) {
        cout<<ans[i]<<" ";
        i++;
    }

    return 0;
}