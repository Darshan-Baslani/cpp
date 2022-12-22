//given a vector arr[] in increasing order. return an array of squares of each elements in the array in increasing order.
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr = {-5,-4,-3,-2,-1};
    vector<int> ans(arr.size());
    int i=0;

    while(i<arr.size()) {
        arr[i] *= arr[i];
        i++;
    }

    int left=0, right=arr.size()-1;
    //{25,16,9,4,1}
    i=0;
    while(i<ans.size()) {
        if(arr[left]<=arr[right]){
            ans[i]=arr[left];
            left++;
        }else{
            ans[i]=arr[right];
            right--;
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